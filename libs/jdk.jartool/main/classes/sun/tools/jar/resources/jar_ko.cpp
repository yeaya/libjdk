#include <sun/tools/jar/resources/jar_ko.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace tools {
		namespace jar {
			namespace resources {

$MethodInfo _jar_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(jar_ko::*)()>(&jar_ko::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _jar_ko_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.tools.jar.resources.jar_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_jar_ko_MethodInfo_
};

$Object* allocate$jar_ko($Class* clazz) {
	return $of($alloc(jar_ko));
}

void jar_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* jar_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("error.bad.cflag"_s),
			$of(u"\'c\' \ud50c\ub798\uadf8\ub97c \uc0ac\uc6a9\ud558\ub824\uba74 Manifest \ub610\ub294 \uc785\ub825 \ud30c\uc77c\uc744 \uc9c0\uc815\ud574\uc57c \ud569\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.dflag"_s),
			$of(u"\'-d, --describe-module\' \uc635\uc158\uc5d0\ub294 \uc785\ub825 \ud30c\uc77c\uc744 \uc9c0\uc815\ud560 \ud544\uc694\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.eflag"_s),
			$of(u"\'e\' \ud50c\ub798\uadf8 \ubc0f Manifest\ub97c \'Main-Class\' \uc18d\uc131\uacfc \ud568\uaed8 \uc9c0\uc815\ud560 \uc218\n\uc5c6\uc2b5\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.file.arg"_s),
			$of(u"\ud30c\uc77c \uc778\uc218 \uad6c\ubb38\uc744 \ubd84\uc11d\ud558\ub294 \uc911 \uc624\ub958\uac00 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.option"_s),
			$of(u"-{ctxuid} \uc635\uc158 \uc911 \ud558\ub098\ub97c \uc9c0\uc815\ud574\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.reason"_s),
			$of(u"\uc798\ubabb\ub41c \uc6d0\uc778: {0}\uc740(\ub294) deprecated, deprecated-for-removal \ub610\ub294 incubating \uc911 \ud558\ub098\uc5ec\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.bad.uflag"_s),
			$of(u"\'u\' \ud50c\ub798\uadf8\ub97c \uc0ac\uc6a9\ud558\ub824\uba74 Manifest, \'e\' \ud50c\ub798\uadf8 \ub610\ub294 \uc785\ub825 \ud30c\uc77c\uc744 \uc9c0\uc815\ud574\uc57c \ud569\ub2c8\ub2e4!"_s)
		}),
		$$new($ObjectArray, {
			$of("error.cant.open"_s),
			$of(u"\uc5f4 \uc218 \uc5c6\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.dir"_s),
			$of(u"{0}: \ub514\ub809\ud1a0\ub9ac\ub97c \uc0dd\uc131\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.create.tempfile"_s),
			$of(u"\uc784\uc2dc \ud30c\uc77c\uc744 \uc0dd\uc131\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.hash.dep"_s),
			$of(u"\ubaa8\ub4c8 {0} \uc885\uc18d\uc131\uc744 \ud574\uc2dc\ud558\ub294 \uc911 \ubaa8\ub4c8 \uacbd\ub85c\uc5d0\uc11c {1} \ubaa8\ub4c8\uc744 \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.illegal.option"_s),
			$of(u"\uc798\ubabb\ub41c \uc635\uc158: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.incorrect.length"_s),
			$of(u"\ucc98\ub9ac \uc911 \uc62c\ubc14\ub974\uc9c0 \uc54a\uc740 \uae38\uc774\uac00 \ubc1c\uacac\ub428: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.invalid.versioned.module.attribute"_s),
			$of(u"\ubd80\uc801\ud569\ud55c \ubaa8\ub4c8 \uae30\uc220\uc790 \uc18d\uc131 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.arg"_s),
			$of(u"{0} \uc635\uc158\uc5d0 \uc778\uc218\uac00 \ud544\uc694\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.missing.provider"_s),
			$of(u"\uc11c\ube44\uc2a4 \uc81c\uacf5\uc790\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.descriptor.not.found"_s),
			$of(u"\ubaa8\ub4c8 \uae30\uc220\uc790\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc74c"_s)
		}),
		$$new($ObjectArray, {
			$of("error.module.options.without.info"_s),
			$of(u"module-info.class \uc5c6\uc774 --module-version \ub610\ub294 --hash-modules \uc911 \ud558\ub098"_s)
		}),
		$$new($ObjectArray, {
			$of("error.multiple.main.operations"_s),
			$of(u"\'-cuxtid\' \uc635\uc158\uc744 \uc5ec\ub7ec \uac1c \uc9c0\uc815\ud560 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.operative.descriptor"_s),
			$of(u"\ub9b4\ub9ac\uc2a4\uc5d0 \ub300\ud55c \uc791\ub3d9 \uae30\uc220\uc790 \uc5c6\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.no.root.descriptor"_s),
			$of(u"\ub8e8\ud2b8 \ubaa8\ub4c8 \uae30\uc220\uc790\uac00 \uc5c6\uc2b5\ub2c8\ub2e4. --release\ub97c \uc9c0\uc815\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("error.nosuch.fileordir"_s),
			$of(u"{0}: \ud574\ub2f9 \ud30c\uc77c \ub610\ub294 \ub514\ub809\ud1a0\ub9ac\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.unexpected.versioned.entry"_s),
			$of(u"{1} \ub9b4\ub9ac\uc2a4\uc5d0 \ub300\ud574 \uc608\uc0c1\uce58 \uc54a\uc740 \ubc84\uc804\uc774 \uc9c0\uc815\ub41c \ud56d\ubaa9 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.notnumber"_s),
			$of(u"\ub9b4\ub9ac\uc2a4 {0}\uc774(\uac00) \ubd80\uc801\ud569\ud568"_s)
		}),
		$$new($ObjectArray, {
			$of("error.release.value.toosmall"_s),
			$of(u"\ub9b4\ub9ac\uc2a4 {0}\uc774(\uac00) \ubd80\uc801\ud569\ud568. 9 \uc774\uc0c1\uc774\uc5b4\uc57c \ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.unable.derive.automodule"_s),
			$of(u"\ubaa8\ub4c8 \uae30\uc220\uc790\ub97c \ud30c\uc0dd\ud560 \uc218 \uc5c6\uc74c: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unexpected.module-info"_s),
			$of(u"\uc608\uc0c1\uce58 \uc54a\uc740 \ubaa8\ub4c8 \uae30\uc220\uc790 {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.unrecognized.option"_s),
			$of(u"\uc778\uc2dd\ud560 \uc218 \uc5c6\ub294 \uc635\uc158: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.bad.entry.name"_s),
			$of(u"\ud56d\ubaa9 \uc774\ub984 \ud615\uc2dd\uc774 \uc798\ubabb\ub428, {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.different.api"_s),
			$of(u"{0} \ud56d\ubaa9\uc5d0 \uc774\uc804 \ubc84\uc804\uacfc \ub2e4\ub978 api\ub97c \uac00\uc9c4 \ud074\ub798\uc2a4\uac00 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.entryname.tooshort"_s),
			$of(u"\ud56d\ubaa9 \uc774\ub984 {0}\uc774(\uac00) \ub108\ubb34 \uc9e7\uace0 \ub514\ub809\ud1a0\ub9ac\uac00 \uc544\ub2d9\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.incompatible.class.version"_s),
			$of(u"{0} \ud56d\ubaa9\uc5d0 \uc774\uc804 \ubc84\uc804\uacfc \ud638\ud658\ub418\uc9c0 \uc54a\ub294 \ud074\ub798\uc2a4 \ubc84\uc804\uc774 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.exports.notequal"_s),
			$of(u"\ubc84\uc804 \uc9c0\uc815\ub41c \ub514\ub809\ud1a0\ub9ac\uc758 module-info.class\uc5d0 \ub2e4\ub978 \"exports\" \ud56d\ubaa9\uc774 \ud3ec\ud568\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.manclass.notequal"_s),
			$of(u"{0}: \ubc84\uc804\uc774 \uc9c0\uc815\ub41c \ub514\ub809\ud1a0\ub9ac\uc758 module-info.class\uc5d0 \ub2e4\ub978 \"main-class\" \ud56d\ubaa9\uc774 \ud3ec\ud568\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.name.notequal"_s),
			$of(u"\ubc84\uc804 \uc9c0\uc815\ub41c \ub514\ub809\ud1a0\ub9ac\uc758 module-info.class\uc5d0 \uc798\ubabb\ub41c \uc774\ub984\uc774 \ud3ec\ud568\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.opens.notequal"_s),
			$of(u"\ubc84\uc804 \uc9c0\uc815\ub41c \ub514\ub809\ud1a0\ub9ac\uc758 module-info.class\uc5d0 \ub2e4\ub978 \"opens\" \ud56d\ubaa9\uc774 \ud3ec\ud568\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.provides.notequal"_s),
			$of(u"\ubc84\uc804 \uc9c0\uc815\ub41c \ub514\ub809\ud1a0\ub9ac\uc758 module-info.class\uc5d0 \ub2e4\ub978 \"provides\" \ud56d\ubaa9\uc774 \ud3ec\ud568\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.added"_s),
			$of(u"\ubc84\uc804 \uc9c0\uc815\ub41c \ub514\ub809\ud1a0\ub9ac\uc758 module-info.class\uc5d0 \ucd94\uac00 \"requires\" \ud56d\ubaa9\uc774 \ud3ec\ud568\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.dropped"_s),
			$of(u"\ubc84\uc804 \uc9c0\uc815\ub41c \ub514\ub809\ud1a0\ub9ac\uc758 module-info.class\uc5d0 \ub204\ub77d\ub41c \"requires\" \ud56d\ubaa9\uc774 \ud3ec\ud568\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.requires.transitive"_s),
			$of(u"\ubc84\uc804 \uc9c0\uc815\ub41c \ub514\ub809\ud1a0\ub9ac\uc758 module-info.class\uc5d0 \ucd94\uac00 \"requires transitive\" \ud56d\ubaa9\uc774 \ud3ec\ud568\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.info.version.notequal"_s),
			$of(u"{0}: \ubc84\uc804\uc774 \uc9c0\uc815\ub41c \ub514\ub809\ud1a0\ub9ac\uc758 module-info.class\uc5d0 \ub2e4\ub978 \"version\" \ud56d\ubaa9\uc774 \ud3ec\ud568\ub428"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.isolated.nested.class"_s),
			$of(u"{0} \ud56d\ubaa9\uc740 \ubd84\ub9ac\ub41c \uc911\ucca9 \ud074\ub798\uc2a4\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.exception"_s),
			$of(u"{0}\uc744(\ub97c) \uac80\uc99d\ud560 \uc218 \uc5c6\uc74c: {1}"_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.jarfile.invalid"_s),
			$of(u"\ubd80\uc801\ud569\ud55c \ub2e4\uc911 \ub9b4\ub9ac\uc2a4 jar \ud30c\uc77c {0}\uc774(\uac00) \uc0ad\uc81c\ub418\uc5c8\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.names.mismatch"_s),
			$of(u"{0} \ud56d\ubaa9\uc5d0 \ub0b4\ubd80 \uc774\ub984 {1}\uc744(\ub97c) \uac00\uc9c4 \ud074\ub798\uc2a4\uac00 \uc788\uc9c0\ub9cc \uc774\ub984\uc774 \uc77c\uce58\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.new.public.class"_s),
			$of(u"{0} \ud56d\ubaa9\uc5d0 \uae30\ubcf8 \ud56d\ubaa9\uc5d0\uc11c \ucc3e\uc744 \uc218 \uc5c6\ub294 \uc0c8\ub85c\uc6b4 \uacf5\uc6a9 \ud074\ub798\uc2a4\uac00 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.validator.version.notnumber"_s),
			$of(u"\ud56d\ubaa9 \uc774\ub984 {0}\uc5d0 \ubc84\uc804 \ubc88\ud638\uac00 \uc5c6\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("error.write.file"_s),
			$of(u"\uae30\uc874 jar \ud30c\uc77c\uc5d0 \uc4f0\ub294 \uc911 \uc624\ub958\uac00 \ubc1c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any"_s),
			$of(u" \ubaa8\ub4e0 \ubaa8\ub4dc\uc5d0\uc11c \uc801\ud569\ud55c \uc791\uc5c5 \uc218\uc815\uc790:\n\n  -C DIR                     \uc9c0\uc815\ub41c \ub514\ub809\ud1a0\ub9ac\ub85c \ubcc0\uacbd\ud558\uace0 \ub2e4\uc74c \ud30c\uc77c\uc744\n                             \ud3ec\ud568\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.file"_s),
			$of(u"  -f, --file=FILE            \uc544\uce74\uc774\ube0c \ud30c\uc77c \uc774\ub984\uc785\ub2c8\ub2e4. \uc0dd\ub7b5\ud560 \uacbd\uc6b0 \uc791\uc5c5\uc5d0 \ub530\ub77c \n                             stdin \ub610\ub294 stdout\uc774 \uc0ac\uc6a9\ub429\ub2c8\ub2e4.\n      --release VERSION      \ub2e4\uc74c \ubaa8\ub4e0 \ud30c\uc77c\uc744 \ubc84\uc804 \uc9c0\uc815\ub41c jar \ub514\ub809\ud1a0\ub9ac\n                             (\uc608: META-INF/versions/VERSION/)\uc5d0 \ubc30\uce58\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.any.verbose"_s),
			$of(u"  -v, --verbose              \ud45c\uc900 \ucd9c\ub825\uc5d0 \uc0c1\uc138 \uc815\ubcf4 \ucd9c\ub825\uc744 \uc0dd\uc131\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create"_s),
			$of(u" \uc0dd\uc131 \ubaa8\ub4dc\uc5d0\uc11c\ub9cc \uc801\ud569\ud55c \uc791\uc5c5 \uc218\uc815\uc790:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.normalize"_s),
			$of(u"  -n, --normalize            \uc0dd\uc131 \ud6c4 \uc0c8 jar \uc544\uce74\uc774\ube0c\uc5d0\uc11c \uc815\ubcf4\ub97c\n                             \uc815\uaddc\ud654\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update"_s),
			$of(u" \uc0dd\uc131 \ubc0f \uc5c5\ub370\uc774\ud2b8 \ubaa8\ub4dc\uc5d0\uc11c\ub9cc \uc801\ud569\ud55c \uc791\uc5c5 \uc218\uc815\uc790:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.do-not-resolve-by-default"_s),
			$of(u"      --do-not-resolve-by-default  \ubaa8\ub4c8\uc758 \uae30\ubcf8 \ub8e8\ud2b8 \uc9d1\ud569\uc5d0\uc11c \uc81c\uc678\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.hash-modules"_s),
			$of(u"      --hash-modules=PATTERN \uc0dd\uc131 \uc911\uc778 \ubaa8\ub4c8\ud615 jar \ub610\ub294 \uc5c5\ub370\uc774\ud2b8 \uc911\uc778 \ube44\ubaa8\ub4c8 jar\uc5d0 \n                             \uc9c1\uc811 \ub610\ub294 \uac04\uc811\uc801\uc73c\ub85c \uc758\uc874\ud558\uace0 \uc8fc\uc5b4\uc9c4 \ud328\ud134\uacfc \uc77c\uce58\ud558\ub294\n                             \ubaa8\ub4c8\uc758 \ud574\uc2dc\ub97c \ucef4\ud4e8\ud2b8\ud558\uace0\n                             \uae30\ub85d\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index"_s),
			$of(u" \uc0dd\uc131, \uc5c5\ub370\uc774\ud2b8 \ubc0f generate-index \ubaa8\ub4dc\uc5d0\uc11c\ub9cc \uc801\ud569\ud55c \uc791\uc5c5 \uc218\uc815\uc790:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.index.no-compress"_s),
			$of(u"  -0, --no-compress          \uc800\uc7a5 \uc804\uc6a9\uc774\uba70 ZIP \uc555\ucd95\uc744 \uc0ac\uc6a9\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.main-class"_s),
			$of(u"  -e, --main-class=CLASSNAME \ubaa8\ub4c8\ud615 \ub610\ub294 \uc2e4\ud589\ud615 jar \uc544\uce74\uc774\ube0c\uc5d0 \ubc88\ub4e4\ub85c\n                             \uc81c\uacf5\ub41c \ub3c5\ub9bd\ud615 \uc560\ud50c\ub9ac\ucf00\uc774\uc158\uc758 \uc560\ud50c\ub9ac\ucf00\uc774\uc158\n                             \uc2dc\uc791 \uc9c0\uc810\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.manifest"_s),
			$of(u"  -m, --manifest=FILE        \uc9c0\uc815\ub41c Manifest \ud30c\uc77c\uc758 Manifest \uc815\ubcf4\ub97c\n                             \ud3ec\ud568\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-path"_s),
			$of(u"  -p, --module-path          \ud574\uc2dc\ub97c \uc0dd\uc131\ud558\uae30 \uc704\ud55c \ubaa8\ub4c8 \uc885\uc18d\uc131\uc758\n                             \uc704\uce58\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.module-version"_s),
			$of(u"      --module-version=VERSION    \ubaa8\ub4c8\ud615 jar\ub97c \uc0dd\uc131\ud558\uac70\ub098 \ube44\ubaa8\ub4c8 jar\ub97c\n                             \uc5c5\ub370\uc774\ud2b8\ud560 \ub54c \ubaa8\ub4c8 \ubc84\uc804\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.no-manifest"_s),
			$of(u"  -M, --no-manifest          \ud56d\ubaa9\uc5d0 \ub300\ud574 Manifest \ud30c\uc77c\uc744 \uc0dd\uc131\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.create.update.warn-if-resolved"_s),
			$of(u"      --warn-if-resolved     \ubaa8\ub4c8\uc774 \ud574\uacb0\ub41c \uacbd\uc6b0 \uacbd\uace0\ub97c \uc2e4\ud589\ud560 \ud234\uc5d0 \ub300\ud55c\n                             \ud78c\ud2b8\ub85c, deprecated, deprecated-for-removal,\n                             \ub610\ub294 incubating \uc911 \ud558\ub098\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main"_s),
			$of(u" \uae30\ubcf8 \uc791\uc5c5 \ubaa8\ub4dc:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.create"_s),
			$of(u"  -c, --create               \uc544\uce74\uc774\ube0c\ub97c \uc0dd\uc131\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.describe-module"_s),
			$of(u"  -d, --describe-module      \ubaa8\ub4c8 \uae30\uc220\uc790 \ub610\ub294 \uc790\ub3d9 \ubaa8\ub4c8 \uc774\ub984\uc744 \uc778\uc1c4\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.extract"_s),
			$of(u"  -x, --extract              \uba85\uba85\ub41c(\ub610\ub294 \ubaa8\ub4e0) \ud30c\uc77c\uc744 \uc544\uce74\uc774\ube0c\uc5d0\uc11c \ucd94\ucd9c\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.generate-index"_s),
			$of(u"  -i, --generate-index=FILE  \uc9c0\uc815\ub41c jar \uc544\uce74\uc774\ube0c\uc5d0 \ub300\ud55c \uc778\ub371\uc2a4 \uc815\ubcf4\ub97c\n                             \uc0dd\uc131\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.list"_s),
			$of(u"  -t, --list                 \uc544\uce74\uc774\ube0c\uc5d0 \ub300\ud55c \ubaa9\ucc28\ub97c \ub098\uc5f4\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.main.update"_s),
			$of(u"  -u, --update               \uae30\uc874 jar \uc544\uce74\uc774\ube0c\ub97c \uc5c5\ub370\uc774\ud2b8\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other"_s),
			$of(u" \uae30\ud0c0 \uc635\uc158:\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help"_s),
			$of(u"  -h, --help[:compat]        \uc774 \ub3c4\uc6c0\ub9d0(\ub610\ub294 \uc120\ud0dd\uc801\uc73c\ub85c \ud638\ud658\uc131)\uc744 \uc81c\uacf5\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.help-extra"_s),
			$of(u"      --help-extra           \ucd94\uac00 \uc635\uc158\uc5d0 \ub300\ud55c \ub3c4\uc6c0\ub9d0\uc744 \uc81c\uacf5\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.opt.other.version"_s),
			$of(u"      --version              \ud504\ub85c\uadf8\ub7a8 \ubc84\uc804\uc744 \uc778\uc1c4\ud569\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.postopt"_s),
			$of(u" \uc544\uce74\uc774\ube0c\ub294 \ubaa8\ub4c8 \uae30\uc220\uc790 \'module-info.class\'\uac00 \uc8fc\uc5b4\uc9c4 \ub514\ub809\ud1a0\ub9ac\uc758\n \ub8e8\ud2b8 \ub610\ub294 jar \uc544\uce74\uc774\ube0c \uc790\uccb4\uc758 \ub8e8\ud2b8\uc5d0 \uc704\uce58\ud55c \uacbd\uc6b0 \ubaa8\ub4c8\ud615 jar\uc785\ub2c8\ub2e4.\n \ub2e4\uc74c \uc791\uc5c5\uc740 \ubaa8\ub4c8\ud615 jar\ub97c \uc0dd\uc131\ud558\uac70\ub098 \uae30\uc874 \ube44\ubaa8\ub4c8 jar\ub97c\n \uc5c5\ub370\uc774\ud2b8\ud560 \ub54c\ub9cc \uc801\ud569\ud569\ub2c8\ub2e4. \'--module-version\',\n \'--hash-modules\' \ubc0f \'--module-path\'.\n\n long \uc635\uc158\uc758 \ud544\uc218 \ub610\ub294 \uc120\ud0dd\uc801 \uc778\uc218\ub294 \ud574\ub2f9\ud558\ub294 short \uc635\uc158\uc5d0 \ub300\ud574\uc11c\ub3c4\n \ud544\uc218 \ub610\ub294 \uc120\ud0dd\uc801\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("main.help.preopt"_s),
			$of(u"\uc0ac\uc6a9\ubc95: jar [OPTION...] [ [--release VERSION] [-C dir] \ud30c\uc77c] ...\njar\ub294 \ud074\ub798\uc2a4 \ubc0f \ub9ac\uc18c\uc2a4\uc5d0 \ub300\ud55c \uc544\uce74\uc774\ube0c\ub97c \uc0dd\uc131\ud569\ub2c8\ub2e4. \uc544\uce74\uc774\ube0c\uc5d0\uc11c\n\uac1c\ubcc4 \ud074\ub798\uc2a4\ub098 \ub9ac\uc18c\uc2a4\ub97c \uc870\uc791\ud558\uac70\ub098 \ubcf5\uc6d0\ud560 \uc218 \uc788\uc2b5\ub2c8\ub2e4.\n\n \uc608\uc81c:\n # \ub450 \ud074\ub798\uc2a4 \ud30c\uc77c\uc744 \uc0ac\uc6a9\ud558\uc5ec classes.jar\ub77c\ub294 \uc544\uce74\uc774\ube0c \uc0dd\uc131:\n jar --create --file classes.jar Foo.class Bar.class\n # \uae30\uc874 Manifest\ub97c \uc0ac\uc6a9\ud558\uc5ec \ubaa8\ub4e0 \ud30c\uc77c\uc774 foo/\uc5d0 \ud3ec\ud568\ub41c \uc544\uce74\uc774\ube0c \uc0dd\uc131:\n jar --create --file classes.jar --manifest mymanifest -C foo/ .\n # \ubaa8\ub4c8 \uae30\uc220\uc790\uac00 classes/module-info.class\uc5d0 \uc704\uce58\ud55c\n # \ubaa8\ub4c8\ud615 jar \uc544\uce74\uc774\ube0c \uc0dd\uc131:\n jar --create --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ classes resources\n # \uae30\uc874 \ube44\ubaa8\ub4c8 jar\ub97c \ubaa8\ub4c8\ud615 jar\ub85c \uc5c5\ub370\uc774\ud2b8:\n jar --update --file foo.jar --main-class com.foo.Main --module-version 1.0\n     -C foo/ module-info.class\n # \uc77c\ubd80 \ud30c\uc77c\uc774 META-INF/versions/9 \ub514\ub809\ud1a0\ub9ac\uc5d0 \uc704\uce58\ud55c \ub2e4\uc911 \ub9b4\ub9ac\uc2a4 jar \uc0dd\uc131:\n jar --create --file mr.jar -C foo classes --release 9 -C foo9 classes\n\njar \uba85\ub839\uc744 \uc9e7\uac8c \ub9cc\ub4e4\uac70\ub098 \ub2e8\uc21c\ud654\ud558\ub824\uba74 \ubcc4\ub3c4\uc758 \ud14d\uc2a4\ud2b8 \ud30c\uc77c\uc5d0 \uc778\uc218\ub97c \uc9c0\uc815\ud558\uace0\nat \uae30\ud638(@)\ub97c \uc811\ub450\uc5b4\ub85c \uc0ac\uc6a9\ud558\uc5ec jar \uba85\ub839\uc5d0 \uc804\ub2ec\ud560 \uc218 \uc788\uc2b5\ub2c8\ub2e4.\n\n \uc608\uc81c:\n # classes.list \ud30c\uc77c\uc5d0\uc11c \ucd94\uac00 \uc635\uc158 \ubc0f \ud074\ub798\uc2a4 \ud30c\uc77c \ubaa9\ub85d \uc77d\uae30\n jar --create --file my.jar @classes.list\n"_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary"_s),
			$of(u"\uc0ac\uc6a9\ubc95: jar [OPTION...] [ [--release VERSION] [-C dir] files] ..."_s)
		}),
		$$new($ObjectArray, {
			$of("main.usage.summary.try"_s),
			$of(u"\uc790\uc138\ud55c \ub0b4\uc6a9\uc744 \ubcf4\ub824\uba74 \'jar --help\'\ub97c \uc2e4\ud589\ud558\uc2ed\uc2dc\uc624."_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.manifest"_s),
			$of(u"Manifest\ub97c \ucd94\uac00\ud568"_s)
		}),
		$$new($ObjectArray, {
			$of("out.added.module-info"_s),
			$of(u"\ucd94\uac00\ub41c \ubaa8\ub4c8 \uc815\ubcf4: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.adding"_s),
			$of(u"\ucd94\uac00\ud558\ub294 \uc911: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.automodule"_s),
			$of(u"\ubaa8\ub4c8 \uae30\uc220\uc790\ub97c \ucc3e\uc744 \uc218 \uc5c6\uc2b5\ub2c8\ub2e4. \uc790\ub3d9 \ubaa8\ub4c8\uc744 \ud30c\uc0dd\ud588\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("out.create"_s),
			$of(u"  \uc0dd\uc131\ub428: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.deflated"_s),
			$of(u"({0}%\ub97c \uac10\uc18c\ud568)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.extracted"_s),
			$of(u"\ucd94\ucd9c\ub428: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.ignore.entry"_s),
			$of(u"{0} \ud56d\ubaa9\uc744 \ubb34\uc2dc\ud558\ub294 \uc911"_s)
		}),
		$$new($ObjectArray, {
			$of("out.inflated"_s),
			$of(u" \uc99d\uac00\ub428: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("out.size"_s),
			$of(u"(\uc785\ub825 = {0}) (\ucd9c\ub825 = {1})"_s)
		}),
		$$new($ObjectArray, {
			$of("out.stored"_s),
			$of(u"(0%\ub97c \uc800\uc7a5\ud568)"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.manifest"_s),
			$of(u"Manifest\ub97c \uc5c5\ub370\uc774\ud2b8\ud568"_s)
		}),
		$$new($ObjectArray, {
			$of("out.update.module-info"_s),
			$of(u"\uc5c5\ub370\uc774\ud2b8\ub41c \ubaa8\ub4c8 \uc815\ubcf4: {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("usage.compat"_s),
			$of(u"\ud638\ud658\uc131 \uc778\ud130\ud398\uc774\uc2a4:\n\uc0ac\uc6a9\ubc95: jar {ctxui}[vfmn0PMe] [jar-file] [manifest-file] [entry-point] [-C dir] files ...\n\uc635\uc158:\n    -c  \uc0c8 \uc544\uce74\uc774\ube0c\ub97c \uc0dd\uc131\ud569\ub2c8\ub2e4.\n    -t  \uc544\uce74\uc774\ube0c\uc5d0 \ub300\ud55c \ubaa9\ucc28\ub97c \ub098\uc5f4\ud569\ub2c8\ub2e4.\n    -x  \uba85\uba85\ub41c(\ub610\ub294 \ubaa8\ub4e0) \ud30c\uc77c\uc744 \uc544\uce74\uc774\ube0c\uc5d0\uc11c \ucd94\ucd9c\ud569\ub2c8\ub2e4.\n    -u  \uae30\uc874 \uc544\uce74\uc774\ube0c\ub97c \uc5c5\ub370\uc774\ud2b8\ud569\ub2c8\ub2e4.\n    -v  \ud45c\uc900 \ucd9c\ub825\uc5d0 \uc0c1\uc138 \uc815\ubcf4 \ucd9c\ub825\uc744 \uc0dd\uc131\ud569\ub2c8\ub2e4.\n    -f  \uc544\uce74\uc774\ube0c \ud30c\uc77c \uc774\ub984\uc744 \uc9c0\uc815\ud569\ub2c8\ub2e4.\n    -m  \uc9c0\uc815\ub41c Manifest \ud30c\uc77c\uc758 Manifest \uc815\ubcf4\ub97c \ud3ec\ud568\ud569\ub2c8\ub2e4.\n    -n  \uc0c8 \uc544\uce74\uc774\ube0c\ub97c \uc0dd\uc131\ud55c \ud6c4 Pack200 \uc815\uaddc\ud654\ub97c \uc218\ud589\ud569\ub2c8\ub2e4.\n    -e  jar \uc2e4\ud589 \ud30c\uc77c\uc5d0 \ubc88\ub4e4\ub85c \uc81c\uacf5\ub41c \ub3c5\ub9bd\ud615 \uc560\ud50c\ub9ac\ucf00\uc774\uc158\uc758 \n        \uc560\ud50c\ub9ac\ucf00\uc774\uc158 \uc2dc\uc791 \uc9c0\uc810\uc744 \uc9c0\uc815\ud569\ub2c8\ub2e4.\n    -0  \uc800\uc7a5 \uc804\uc6a9\uc774\uba70 ZIP \uc555\ucd95\uc744 \uc0ac\uc6a9\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4.\n    -P  \ud30c\uc77c \uc774\ub984\uc5d0\uc11c \uc120\ud589 \'/\'(\uc808\ub300 \uacbd\ub85c) \ubc0f \"..\"(\uc0c1\uc704 \ub514\ub809\ud1a0\ub9ac) \uad6c\uc131\uc694\uc18c\ub97c \uc720\uc9c0\ud569\ub2c8\ub2e4.\n    -M  \ud56d\ubaa9\uc5d0 \ub300\ud574 Manifest \ud30c\uc77c\uc744 \uc0dd\uc131\ud558\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4.\n    -i  \uc9c0\uc815\ub41c jar \ud30c\uc77c\uc5d0 \ub300\ud55c \uc778\ub371\uc2a4 \uc815\ubcf4\ub97c \uc0dd\uc131\ud569\ub2c8\ub2e4.\n    -C  \uc9c0\uc815\ub41c \ub514\ub809\ud1a0\ub9ac\ub85c \ubcc0\uacbd\ud558\uace0 \ub2e4\uc74c \ud30c\uc77c\uc744 \ud3ec\ud568\ud569\ub2c8\ub2e4.\n\ud2b9\uc815 \ud30c\uc77c\uc774 \ub514\ub809\ud1a0\ub9ac\uc77c \uacbd\uc6b0 \uc21c\ud658\uc801\uc73c\ub85c \ucc98\ub9ac\ub429\ub2c8\ub2e4.\nManifest \ud30c\uc77c \uc774\ub984, \uc544\uce74\uc774\ube0c \ud30c\uc77c \uc774\ub984 \ubc0f \uc2dc\uc791 \uc9c0\uc810 \uc774\ub984\uc740\n\'m\', \'f\' \ubc0f \'e\' \ud50c\ub798\uadf8\uc640 \ub3d9\uc77c\ud55c \uc21c\uc11c\ub85c \uc9c0\uc815\ub429\ub2c8\ub2e4.\n\n\uc608 1: classes.jar\ub77c\ub294 \uc544\uce74\uc774\ube0c\uc5d0 \ub450 \ud074\ub798\uc2a4 \ud30c\uc77c\uc744 \uc544\uce74\uc774\ube0c\ud558\ub294 \ubc29\ubc95: \n       jar cvf classes.jar Foo.class Bar.class \n\uc608 2: \uae30\uc874 Manifest \ud30c\uc77c \'mymanifest\'\ub97c \uc0ac\uc6a9\ud558\uc5ec\n           foo/ \ub514\ub809\ud1a0\ub9ac\uc758 \ubaa8\ub4e0 \ud30c\uc77c\uc744 \'classes.jar\'\ub85c \uc544\uce74\uc774\ube0c\ud558\ub294 \ubc29\ubc95: \n       jar cvfm classes.jar mymanifest -C foo/ .\n"_s)
		}),
		$$new($ObjectArray, {
			$of("warn.release.unexpected.versioned.entry"_s),
			$of(u"\uc608\uc0c1\uce58 \uc54a\uc740 \ubc84\uc804\uc774 \uc9c0\uc815\ub41c \ud56d\ubaa9 {0}\uc785\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.concealed.public.class"_s),
			$of(u"\uacbd\uace0: {0} \ud56d\ubaa9\uc740 \uc228\uaca8\uc9c4 \ud328\ud0a4\uc9c0\uc5d0 \uc788\ub294\n\uacf5\uc6a9 \ud074\ub798\uc2a4\uc785\ub2c8\ub2e4. \uc774 jar\uc744 \ud074\ub798\uc2a4 \uacbd\ub85c\uc5d0 \ubc30\uce58\ud558\uba74\n\uacf5\uc6a9 \uc778\ud130\ud398\uc774\uc2a4\uac00 \ud638\ud658\ub418\uc9c0 \uc54a\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.identical.entry"_s),
			$of(u"\uacbd\uace0: {0} \ud56d\ubaa9\uc5d0 \uc774\ubbf8 jar\uc5d0 \uc788\ub294 \ud56d\ubaa9\uacfc\n\ub3d9\uc77c\ud55c \ud074\ub798\uc2a4\uac00 \uc788\uc2b5\ub2c8\ub2e4."_s)
		}),
		$$new($ObjectArray, {
			$of("warn.validator.resources.with.same.name"_s),
			$of(u"\uacbd\uace0: {0} \ud56d\ubaa9\uc5d0 \ub3d9\uc77c\ud55c \uc774\ub984\uc758 \uc5ec\ub7ec \ub9ac\uc18c\uc2a4\uac00 \uc788\uc2b5\ub2c8\ub2e4."_s)
		})
	});
}

jar_ko::jar_ko() {
}

$Class* jar_ko::load$($String* name, bool initialize) {
	$loadClass(jar_ko, name, initialize, &_jar_ko_ClassInfo_, allocate$jar_ko);
	return class$;
}

$Class* jar_ko::class$ = nullptr;

			} // resources
		} // jar
	} // tools
} // sun