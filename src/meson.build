
project('constexpr sin', 'cpp',
            default_options : [
                'cpp_std=c++20',
                'warning_level=3', 'werror=true'],
            version : 'alpha 0.1')


src_files = [ 'main.cpp' ]


analyze_cmd = [ 'clang++' ]
analyze_cmd += [
            '-I', meson.global_source_root(),
            '-Wall', '-Wextra', '-Wshadow', '-Wpedantic',
            '-std=c++20',
            '--analyze', '-fsanitize=address,undefined'
]

analyze_cmd += src_files

run_target(
     'analyze',
     command : analyze_cmd )

exe = executable('float_mod',
            sources : src_files,
            override_options : ['buildtype=release'] )

exe_debug = executable('float_mod_debug',
            sources : src_files )

test( 'test run', exe,
      args : [ ] )

exe2 = executable(
    'speed_check',
    'speed_check.cpp',
    override_options : ['buildtype=release']
)

test(
    'speed test against std',
    exe2
)
