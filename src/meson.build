# ST VL53L1X Time-of-Flight Sensor

vl53l1x_files = files(
	'vl53l1x.cpp'
)

# TODO: also build a native version?
st_vl53l1x = static_library('st_vl53l1x',
	sources: vl53l1x_files,
	dependencies: [
		framework_include_dep,
		framework_host_include_dep
	]
)

st_vl53l1x_driver_dep = declare_dependency(
	link_with: st_vl53l1x,
	include_directories: include_directories('.', is_system: true),
)

framework_lint_files += vl53l1x_files
