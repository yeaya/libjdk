#include <com/sun/tools/sjavac/options/OptionHelper.h>

#include <com/sun/tools/javac/main/CommandLine.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/sjavac/Transformer.h>
#include <com/sun/tools/sjavac/options/ArgumentIterator.h>
#include <com/sun/tools/sjavac/options/Option.h>
#include <java/io/IOException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <jcpp.h>

using $1OptionArray = $Array<::com::sun::tools::javac::main::Option>;
using $OptionArray = $Array<::com::sun::tools::sjavac::options::Option>;
using $PathArray = $Array<::java::nio::file::Path>;
using $CommandLine = ::com::sun::tools::javac::main::CommandLine;
using $1Option = ::com::sun::tools::javac::main::Option;
using $Transformer = ::com::sun::tools::sjavac::Transformer;
using $ArgumentIterator = ::com::sun::tools::sjavac::options::ArgumentIterator;
using $Option = ::com::sun::tools::sjavac::options::Option;
using $IOException = ::java::io::IOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace options {

$MethodInfo _OptionHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OptionHelper, init$, void)},
	{"addTransformer", "(Ljava/lang/String;Lcom/sun/tools/sjavac/Transformer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, addTransformer, void, $String*, $Transformer*)},
	{"classpath", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/file/Path;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, classpath, void, $List*)},
	{"compareFoundSources", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, compareFoundSources, void, $Path*)},
	{"destDir", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, destDir, void, $Path*)},
	{"exclude", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, exclude, void, $String*)},
	{"generatedSourcesDir", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, generatedSourcesDir, void, $Path*)},
	{"headerDir", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, headerDir, void, $Path*)},
	{"implicit", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, implicit, void, $String*)},
	{"include", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, include, void, $String*)},
	{"javacArg", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(OptionHelper, javacArg, void, $StringArray*)},
	{"logLevel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, logLevel, void, $String*)},
	{"modulepath", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/file/Path;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, modulepath, void, $List*)},
	{"numCores", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, numCores, void, int32_t)},
	{"permitArtifact", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, permitArtifact, void, $String*)},
	{"permitDefaultPackage", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, permitDefaultPackage, void)},
	{"permitUnidentifiedArtifacts", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, permitUnidentifiedArtifacts, void)},
	{"reportError", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, reportError, void, $String*)},
	{"serverConf", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, serverConf, void, $String*)},
	{"sourceRoots", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/file/Path;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, sourceRoots, void, $List*)},
	{"sourcepath", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/file/Path;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, sourcepath, void, $List*)},
	{"startServerConf", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, startServerConf, void, $String*)},
	{"stateDir", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OptionHelper, stateDir, void, $Path*)},
	{"traverse", "([Ljava/lang/String;)V", nullptr, 0, $virtualMethod(OptionHelper, traverse, void, $StringArray*)},
	{"unescapeCmdArg", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(OptionHelper, unescapeCmdArg, $String*, $String*)},
	{}
};

$ClassInfo _OptionHelper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.sjavac.options.OptionHelper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OptionHelper_MethodInfo_
};

$Object* allocate$OptionHelper($Class* clazz) {
	return $of($alloc(OptionHelper));
}

void OptionHelper::init$() {
}

void OptionHelper::traverse($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Iterable, allArgs, nullptr);
	try {
		$assign(allArgs, $CommandLine::parse($($List::of(args))));
	} catch ($IOException& e) {
		$throwNew($IllegalArgumentException, $$str({"Problem reading @"_s, $(e->getMessage())}));
	}
	$var($ArgumentIterator, argIter, $new($ArgumentIterator, allArgs));
	bool nextArg$continue = false;
	while (argIter->hasNext()) {
		$var($String, arg, $cast($String, argIter->next()));
		if ($nc(arg)->startsWith("-"_s)) {
			{
				$var($OptionArray, arr$, $Option::values());
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$Option* opt = arr$->get(i$);
					{
						if ($nc(opt)->processCurrent(argIter, this)) {
							nextArg$continue = true;
							break;
						}
					}
				}
				if (nextArg$continue) {
					nextArg$continue = false;
					continue;
				}
			}
			javacArg($$new($StringArray, {arg}));
			{
				$var($1OptionArray, arr$, $1Option::values());
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$1Option* javacOpt = arr$->get(i$);
					{
						if ($nc(javacOpt)->matches(arg)) {
							bool takesArgument = javacOpt->hasArg();
							bool var$0 = !arg->contains(":"_s);
							bool separateToken = var$0 && !arg->contains("="_s);
							if (takesArgument && separateToken) {
								javacArg($$new($StringArray, {$($cast($String, argIter->next()))}));
							}
						}
					}
				}
			}
		} else {
			sourceRoots($($Arrays::asList($$new($PathArray, {$($Paths::get(arg, $$new($StringArray, 0)))}))));
		}
	}
}

$String* OptionHelper::unescapeCmdArg($String* arg) {
	return $($nc(arg)->replaceAll("%20"_s, " "_s))->replaceAll("%2C"_s, ","_s);
}

OptionHelper::OptionHelper() {
}

$Class* OptionHelper::load$($String* name, bool initialize) {
	$loadClass(OptionHelper, name, initialize, &_OptionHelper_ClassInfo_, allocate$OptionHelper);
	return class$;
}

$Class* OptionHelper::class$ = nullptr;

				} // options
			} // sjavac
		} // tools
	} // sun
} // com