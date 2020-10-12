# -*- coding: utf-8 -*-

import os

import click

from onix import _onix
from onix.__version__ import __version__


@click.command("onix")
@click.version_option(version=__version__)
@click.pass_context
def cli(*args, **kwargs):
    """Actually a snek!"""

    _onix.game()


if __name__ == "__main__":
    cli()
