# ST VL53L1X Time-of-Flight Sensor

vl53l1x_files = files(
	'vl53l1x.cpp'
	)

st_vl53l1x_driver_dep = declare_dependency(
	sources: vl53l1x_files,
	include_directories: driver_include_root,
)

framework_lint_files += vl53l1x_files
