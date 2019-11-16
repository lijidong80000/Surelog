release:
	mkdir -p build/tests;
	mkdir -p dist;
	cd build; cmake ../; make -j 4
	cd build; ../src/release.tcl "release tcmalloc"
	cd build; ../tests/regression.tcl mt=0

test:
	mkdir -p build/tests;
	cd build; ../tests/regression.tcl mt=0

clean:
	rm -rf build;
	chmod -fR u+rwx dist; rm -rf dist;
