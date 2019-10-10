import os
import time
import re
from slackclient import SlackClient

# Simple slackbot template
# Be sure to have a Slack account and create and slack app to get bot Token

# new SlackClient
slack_client = SlackClient(os.environ.get('SLACK_BOT_TOKEN'))
bot_id = None

# Constants
RTM_READ_DELAY = 1
EXAMPLE_COMMAND = "do"
MENTION_REGEX = "^<@(|[WU].+?)>(.*)"


def parse_bot_commands(slack_events):

    for event in slack_events:
        if event["type"] == "message" and not "subtype" in event:
            user_id, message = parse_direct_mention(event["text"])
            if user_id == bot_id:
                return message, event["channel"]
    return None, None


def parse_direct_mention(message_text):

    matches = re.search(MENTION_REGEX, message_text)
    return (matches.group(1), matches.group(2).strip()) if matches else (None, None)


def handle_command(command, channel):

    default_response = "Try *{}*.".format(EXAMPLE_COMMAND)
    response = None

    if command.startswith(EXAMPLE_COMMAND):
        response = "I can do that!"

    slack_client.api_call(
        "chat.postMessage",
        channel=channel,
        text=response or default_response
    )


if __name__ == "__main__":

    if slack_client.rtm_connect(with_team_state=False):
        print("Bot connected and running")
        bot_id = slack_client.api_call("auth.test")["user_id"]
        while True:
            command, channel = parse_bot_commands(slack_client.rtm_read())
            if command:
                handle_command(command, channel)
            time.sleep(RTM_READ_DELAY)
    else:
        print("Connection failed...")