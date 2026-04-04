#include <com/sun/tools/javac/resources/launcher.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace resources {

void launcher::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* launcher::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"launcher.err.cant.access.main.method"_s,
			"can\'\'t access main method in class: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.cant.find.class"_s,
			"can\'\'t find class: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.cant.find.main.method"_s,
			"can\'\'t find main(String[]) method in class: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.cant.read.file"_s,
			"error reading source file {0}: {1}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.compilation.failed"_s,
			"compilation failed"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.enable.preview.requires.source"_s,
			"--enable-preview must be used with --source"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.file.not.found"_s,
			"source file not found: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.invalid.filename"_s,
			"invalid path for source file: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.invalid.value.for.source"_s,
			"invalid value for --source option: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.main.not.public.static"_s,
			"\'\'main\'\' method is not declared \'\'public static\'\'"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.main.not.void"_s,
			"\'\'main\'\' method is not declared with a return type of \'\'void\'\'"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.no.args"_s,
			"no path for source file"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.no.class"_s,
			"no class declared in source file"_s
		}),
		$$new($ObjectArray, {
			"launcher.err.no.value.for.option"_s,
			"no value given for option: {0}"_s
		}),
		$$new($ObjectArray, {
			"launcher.error"_s,
			"error: "_s
		})
	});
}

launcher::launcher() {
}

$Class* launcher::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(launcher, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(launcher, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.resources.launcher",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(launcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(launcher);
	});
	return class$;
}

$Class* launcher::class$ = nullptr;

				} // resources
			} // javac
		} // tools
	} // sun
} // com