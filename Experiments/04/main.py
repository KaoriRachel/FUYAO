import sys
import getopt
import faas


def handler_factory(func_name):
    async def foo_handler(ctx, input_):
        bar_output = await ctx.invoke_func('exp04Bar', input_)
        return 'From function Bar: '.encode() + bar_output

    def bar_handler(ctx, input_):
        return input_ + ', world\n'.encode()

    if func_name == 'exp04Foo':
        return foo_handler
    elif func_name == 'exp04Bar':
        return bar_handler
    else:
        sys.stderr.write('Unknown function: {}\n'.format(func_name))
        sys.exit(1)


if __name__ == '__main__':
    # Only for debug
    debug_file_path = ""
    opts, args = getopt.getopt(sys.argv[1:], '-d:', ['debug_file_path='])
    for opt_name, opt_value in opts:
        if opt_name in ('-d', '--debug_file_path'):
            debug_file_path = opt_value
    # Run
    faas.serve_forever(handler_factory, debug_file_path)
