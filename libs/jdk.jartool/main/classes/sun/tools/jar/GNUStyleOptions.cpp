#include <sun/tools/jar/GNUStyleOptions.h>

#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Consumer.h>
#include <sun/tools/jar/GNUStyleOptions$1.h>
#include <sun/tools/jar/GNUStyleOptions$10.h>
#include <sun/tools/jar/GNUStyleOptions$11.h>
#include <sun/tools/jar/GNUStyleOptions$12.h>
#include <sun/tools/jar/GNUStyleOptions$13.h>
#include <sun/tools/jar/GNUStyleOptions$14.h>
#include <sun/tools/jar/GNUStyleOptions$15.h>
#include <sun/tools/jar/GNUStyleOptions$16.h>
#include <sun/tools/jar/GNUStyleOptions$17.h>
#include <sun/tools/jar/GNUStyleOptions$18.h>
#include <sun/tools/jar/GNUStyleOptions$19.h>
#include <sun/tools/jar/GNUStyleOptions$2.h>
#include <sun/tools/jar/GNUStyleOptions$20.h>
#include <sun/tools/jar/GNUStyleOptions$21.h>
#include <sun/tools/jar/GNUStyleOptions$22.h>
#include <sun/tools/jar/GNUStyleOptions$3.h>
#include <sun/tools/jar/GNUStyleOptions$4.h>
#include <sun/tools/jar/GNUStyleOptions$5.h>
#include <sun/tools/jar/GNUStyleOptions$6.h>
#include <sun/tools/jar/GNUStyleOptions$7.h>
#include <sun/tools/jar/GNUStyleOptions$8.h>
#include <sun/tools/jar/GNUStyleOptions$9.h>
#include <sun/tools/jar/GNUStyleOptions$BadArgs.h>
#include <sun/tools/jar/GNUStyleOptions$Option.h>
#include <sun/tools/jar/GNUStyleOptions$OptionType.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

#undef ANY
#undef CREATE_UPDATE
#undef CREATE_UPDATE_INDEX
#undef MAIN_OPERATION
#undef OTHER

using $GNUStyleOptions$OptionArray = $Array<::sun::tools::jar::GNUStyleOptions$Option>;
using $GNUStyleOptions$OptionTypeArray = $Array<::sun::tools::jar::GNUStyleOptions$OptionType>;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Consumer = ::java::util::function::Consumer;
using $GNUStyleOptions$1 = ::sun::tools::jar::GNUStyleOptions$1;
using $GNUStyleOptions$10 = ::sun::tools::jar::GNUStyleOptions$10;
using $GNUStyleOptions$11 = ::sun::tools::jar::GNUStyleOptions$11;
using $GNUStyleOptions$12 = ::sun::tools::jar::GNUStyleOptions$12;
using $GNUStyleOptions$13 = ::sun::tools::jar::GNUStyleOptions$13;
using $GNUStyleOptions$14 = ::sun::tools::jar::GNUStyleOptions$14;
using $GNUStyleOptions$15 = ::sun::tools::jar::GNUStyleOptions$15;
using $GNUStyleOptions$16 = ::sun::tools::jar::GNUStyleOptions$16;
using $GNUStyleOptions$17 = ::sun::tools::jar::GNUStyleOptions$17;
using $GNUStyleOptions$18 = ::sun::tools::jar::GNUStyleOptions$18;
using $GNUStyleOptions$19 = ::sun::tools::jar::GNUStyleOptions$19;
using $GNUStyleOptions$2 = ::sun::tools::jar::GNUStyleOptions$2;
using $GNUStyleOptions$20 = ::sun::tools::jar::GNUStyleOptions$20;
using $GNUStyleOptions$21 = ::sun::tools::jar::GNUStyleOptions$21;
using $GNUStyleOptions$22 = ::sun::tools::jar::GNUStyleOptions$22;
using $GNUStyleOptions$3 = ::sun::tools::jar::GNUStyleOptions$3;
using $GNUStyleOptions$4 = ::sun::tools::jar::GNUStyleOptions$4;
using $GNUStyleOptions$5 = ::sun::tools::jar::GNUStyleOptions$5;
using $GNUStyleOptions$6 = ::sun::tools::jar::GNUStyleOptions$6;
using $GNUStyleOptions$7 = ::sun::tools::jar::GNUStyleOptions$7;
using $GNUStyleOptions$8 = ::sun::tools::jar::GNUStyleOptions$8;
using $GNUStyleOptions$9 = ::sun::tools::jar::GNUStyleOptions$9;
using $GNUStyleOptions$BadArgs = ::sun::tools::jar::GNUStyleOptions$BadArgs;
using $GNUStyleOptions$Option = ::sun::tools::jar::GNUStyleOptions$Option;
using $GNUStyleOptions$OptionType = ::sun::tools::jar::GNUStyleOptions$OptionType;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

class GNUStyleOptions$$Lambda$printUsageTryHelp : public $Consumer {
	$class(GNUStyleOptions$$Lambda$printUsageTryHelp, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* out) override {
		GNUStyleOptions::printUsageTryHelp($cast($PrintWriter, out));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GNUStyleOptions$$Lambda$printUsageTryHelp>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GNUStyleOptions$$Lambda$printUsageTryHelp::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GNUStyleOptions$$Lambda$printUsageTryHelp::*)()>(&GNUStyleOptions$$Lambda$printUsageTryHelp::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GNUStyleOptions$$Lambda$printUsageTryHelp::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.GNUStyleOptions$$Lambda$printUsageTryHelp",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* GNUStyleOptions$$Lambda$printUsageTryHelp::load$($String* name, bool initialize) {
	$loadClass(GNUStyleOptions$$Lambda$printUsageTryHelp, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GNUStyleOptions$$Lambda$printUsageTryHelp::class$ = nullptr;

$FieldInfo _GNUStyleOptions_FieldInfo_[] = {
	{"recognizedOptions", "[Lsun/tools/jar/GNUStyleOptions$Option;", nullptr, $STATIC, $staticField(GNUStyleOptions, recognizedOptions)},
	{}
};

$MethodInfo _GNUStyleOptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GNUStyleOptions::*)()>(&GNUStyleOptions::init$))},
	{"getOption", "(Ljava/lang/String;)Lsun/tools/jar/GNUStyleOptions$Option;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GNUStyleOptions$Option*(*)($String*)>(&GNUStyleOptions::getOption)), "sun.tools.jar.GNUStyleOptions$BadArgs"},
	{"parseOptions", "(Lsun/tools/jar/Main;[Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Main*,$StringArray*)>(&GNUStyleOptions::parseOptions)), "sun.tools.jar.GNUStyleOptions$BadArgs"},
	{"printCompatHelp", "(Ljava/io/PrintWriter;)V", nullptr, $STATIC, $method(static_cast<void(*)($PrintWriter*)>(&GNUStyleOptions::printCompatHelp))},
	{"printHelp", "(Ljava/io/PrintWriter;)V", nullptr, $STATIC, $method(static_cast<void(*)($PrintWriter*)>(&GNUStyleOptions::printHelp))},
	{"printHelp0", "(Ljava/io/PrintWriter;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($PrintWriter*,bool)>(&GNUStyleOptions::printHelp0))},
	{"printHelpExtra", "(Ljava/io/PrintWriter;)V", nullptr, $STATIC, $method(static_cast<void(*)($PrintWriter*)>(&GNUStyleOptions::printHelpExtra))},
	{"printUsageTryHelp", "(Ljava/io/PrintWriter;)V", nullptr, $STATIC, $method(static_cast<void(*)($PrintWriter*)>(&GNUStyleOptions::printUsageTryHelp))},
	{"printVersion", "(Ljava/io/PrintWriter;)V", nullptr, $STATIC, $method(static_cast<void(*)($PrintWriter*)>(&GNUStyleOptions::printVersion))},
	{}
};

$InnerClassInfo _GNUStyleOptions_InnerClassesInfo_[] = {
	{"sun.tools.jar.GNUStyleOptions$Option", "sun.tools.jar.GNUStyleOptions", "Option", $STATIC | $ABSTRACT},
	{"sun.tools.jar.GNUStyleOptions$OptionType", "sun.tools.jar.GNUStyleOptions", "OptionType", $STATIC | $FINAL | $ENUM},
	{"sun.tools.jar.GNUStyleOptions$BadArgs", "sun.tools.jar.GNUStyleOptions", "BadArgs", $STATIC},
	{"sun.tools.jar.GNUStyleOptions$22", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$21", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$20", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$19", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$18", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$17", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$16", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$15", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$14", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$13", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$12", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$11", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$10", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$9", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$8", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$7", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$6", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$5", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$4", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$3", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$2", nullptr, nullptr, 0},
	{"sun.tools.jar.GNUStyleOptions$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GNUStyleOptions_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.GNUStyleOptions",
	"java.lang.Object",
	nullptr,
	_GNUStyleOptions_FieldInfo_,
	_GNUStyleOptions_MethodInfo_,
	nullptr,
	nullptr,
	_GNUStyleOptions_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.tools.jar.GNUStyleOptions$Option,sun.tools.jar.GNUStyleOptions$OptionType,sun.tools.jar.GNUStyleOptions$BadArgs,sun.tools.jar.GNUStyleOptions$22,sun.tools.jar.GNUStyleOptions$21,sun.tools.jar.GNUStyleOptions$20,sun.tools.jar.GNUStyleOptions$19,sun.tools.jar.GNUStyleOptions$18,sun.tools.jar.GNUStyleOptions$17,sun.tools.jar.GNUStyleOptions$16,sun.tools.jar.GNUStyleOptions$15,sun.tools.jar.GNUStyleOptions$14,sun.tools.jar.GNUStyleOptions$13,sun.tools.jar.GNUStyleOptions$12,sun.tools.jar.GNUStyleOptions$11,sun.tools.jar.GNUStyleOptions$10,sun.tools.jar.GNUStyleOptions$9,sun.tools.jar.GNUStyleOptions$8,sun.tools.jar.GNUStyleOptions$7,sun.tools.jar.GNUStyleOptions$6,sun.tools.jar.GNUStyleOptions$5,sun.tools.jar.GNUStyleOptions$4,sun.tools.jar.GNUStyleOptions$3,sun.tools.jar.GNUStyleOptions$2,sun.tools.jar.GNUStyleOptions$1"
};

$Object* allocate$GNUStyleOptions($Class* clazz) {
	return $of($alloc(GNUStyleOptions));
}

$GNUStyleOptions$OptionArray* GNUStyleOptions::recognizedOptions = nullptr;

void GNUStyleOptions::init$() {
}

int32_t GNUStyleOptions::parseOptions($Main* jartool, $StringArray* args) {
	$init(GNUStyleOptions);
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	if ($nc(args)->length == 0) {
		$set($nc(jartool), info, static_cast<$Consumer*>($new(GNUStyleOptions$$Lambda$printUsageTryHelp)));
		return 0;
	}
	for (; count < $nc(args)->length; ++count) {
		bool var$1 = $nc(args->get(count))->charAt(0) != u'-';
		bool var$0 = var$1 || $nc(args->get(count))->equals("-C"_s);
		if (var$0 || $nc(args->get(count))->equals("--release"_s)) {
			break;
		}
		$var($String, name, args->get(count));
		if ($nc(name)->equals("-XDsuppress-tool-removal-message"_s)) {
			$nc(jartool)->suppressDeprecateMsg = true;
			continue;
		}
		$var($GNUStyleOptions$Option, option, getOption(name));
		$var($String, param, nullptr);
		if ($nc(option)->hasArg) {
			if ($nc(name)->startsWith("--help"_s)) {
				if (name->indexOf((int32_t)u':') > 0) {
					int32_t var$2 = name->indexOf((int32_t)u':') + 1;
					$assign(param, name->substring(var$2, name->length()));
				}
			} else {
				bool var$4 = name->startsWith("--"_s);
				if (var$4 && name->indexOf((int32_t)u'=') > 0) {
					int32_t var$5 = name->indexOf((int32_t)u'=') + 1;
					$assign(param, name->substring(var$5, name->length()));
				} else if (count + 1 < args->length) {
					$assign(param, args->get(++count));
				}
			}
			bool var$6 = !option->argIsOptional;
			if (var$6) {
				bool var$7 = param == nullptr || $nc(param)->isEmpty();
				var$6 = (var$7 || $nc(param)->charAt(0) == u'-');
			}
			if (var$6) {
				$throw($($$new($GNUStyleOptions$BadArgs, "error.missing.arg"_s, name)->showUsage(true)));
			}
		}
		$nc(option)->process(jartool, name, param);
	}
	return count;
}

$GNUStyleOptions$Option* GNUStyleOptions::getOption($String* name) {
	$init(GNUStyleOptions);
	$useLocalCurrentObjectStackCache();
	{
		$var($GNUStyleOptions$OptionArray, arr$, GNUStyleOptions::recognizedOptions);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($GNUStyleOptions$Option, o, arr$->get(i$));
			{
				if ($nc(o)->matches(name)) {
					return o;
				}
			}
		}
	}
	$throw($($$new($GNUStyleOptions$BadArgs, "error.unrecognized.option"_s, name)->showUsage(true)));
}

void GNUStyleOptions::printHelpExtra($PrintWriter* out) {
	$init(GNUStyleOptions);
	printHelp0(out, true);
}

void GNUStyleOptions::printHelp($PrintWriter* out) {
	$init(GNUStyleOptions);
	printHelp0(out, false);
}

void GNUStyleOptions::printHelp0($PrintWriter* out, bool printExtra) {
	$init(GNUStyleOptions);
	$useLocalCurrentObjectStackCache();
	$nc(out)->format("%s%n"_s, $$new($ObjectArray, {$($of($Main::getMsg("main.help.preopt"_s)))}));
	{
		$var($GNUStyleOptions$OptionTypeArray, arr$, $GNUStyleOptions$OptionType::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$GNUStyleOptions$OptionType* type = arr$->get(i$);
			{
				bool typeHeadingWritten = false;
				{
					$var($GNUStyleOptions$OptionArray, arr$, GNUStyleOptions::recognizedOptions);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($GNUStyleOptions$Option, o, arr$->get(i$));
						{
							if (!$nc(o)->type->equals(type)) {
								continue;
							}
							$var($String, name, $nc($nc($nc(o)->aliases)->get(0))->substring(1));
							$assign(name, name->charAt(0) == u'-' ? name->substring(1) : name);
							bool var$0 = o->isHidden();
							if (var$0 || $nc(name)->equals("h"_s)) {
								continue;
							}
							if (o->isExtra() && !printExtra) {
								continue;
							}
							if (!typeHeadingWritten) {
								out->format("%n%s%n"_s, $$new($ObjectArray, {$($of($Main::getMsg($$str({"main.help.opt."_s, $nc(type)->name$}))))}));
								typeHeadingWritten = true;
							}
							out->format("%s%n"_s, $$new($ObjectArray, {$($of($Main::getMsg($$str({"main.help.opt."_s, $nc(type)->name$, "."_s, name}))))}));
						}
					}
				}
			}
		}
	}
	out->format("%n%s%n%n"_s, $$new($ObjectArray, {$($of($Main::getMsg("main.help.postopt"_s)))}));
}

void GNUStyleOptions::printCompatHelp($PrintWriter* out) {
	$init(GNUStyleOptions);
	$useLocalCurrentObjectStackCache();
	$nc(out)->format("%s%n"_s, $$new($ObjectArray, {$($of($Main::getMsg("usage.compat"_s)))}));
}

void GNUStyleOptions::printUsageTryHelp($PrintWriter* out) {
	$init(GNUStyleOptions);
	$useLocalCurrentObjectStackCache();
	$nc(out)->format("%s%n"_s, $$new($ObjectArray, {$($of($Main::getMsg("main.usage.summary.try"_s)))}));
}

void GNUStyleOptions::printVersion($PrintWriter* out) {
	$init(GNUStyleOptions);
	$useLocalCurrentObjectStackCache();
	$nc(out)->format("%s %s%n"_s, $$new($ObjectArray, {
		$of("jar"_s),
		$($of($System::getProperty("java.version"_s)))
	}));
}

void clinit$GNUStyleOptions($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($GNUStyleOptions$OptionType);
	$assignStatic(GNUStyleOptions::recognizedOptions, $new($GNUStyleOptions$OptionArray, {
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$1, false, $GNUStyleOptions$OptionType::MAIN_OPERATION, $$new($StringArray, {
			"--create"_s,
			"-c"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$2, true, $GNUStyleOptions$OptionType::MAIN_OPERATION, $$new($StringArray, {
			"--generate-index"_s,
			"-i"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$3, false, $GNUStyleOptions$OptionType::MAIN_OPERATION, $$new($StringArray, {
			"--list"_s,
			"-t"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$4, false, $GNUStyleOptions$OptionType::MAIN_OPERATION, $$new($StringArray, {
			"--update"_s,
			"-u"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$5, false, $GNUStyleOptions$OptionType::MAIN_OPERATION, $$new($StringArray, {
			"--extract"_s,
			"-x"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$6, false, $GNUStyleOptions$OptionType::MAIN_OPERATION, $$new($StringArray, {
			"--describe-module"_s,
			"-d"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$7, false, $GNUStyleOptions$OptionType::MAIN_OPERATION, $$new($StringArray, {"--validate"_s}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$8, true, $GNUStyleOptions$OptionType::ANY, $$new($StringArray, {
			"--file"_s,
			"-f"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$9, false, $GNUStyleOptions$OptionType::ANY, $$new($StringArray, {
			"--verbose"_s,
			"-v"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$10, true, $GNUStyleOptions$OptionType::CREATE_UPDATE, $$new($StringArray, {
			"--main-class"_s,
			"-e"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$11, true, $GNUStyleOptions$OptionType::CREATE_UPDATE, $$new($StringArray, {
			"--manifest"_s,
			"-m"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$12, false, $GNUStyleOptions$OptionType::CREATE_UPDATE, $$new($StringArray, {
			"--no-manifest"_s,
			"-M"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$13, true, $GNUStyleOptions$OptionType::CREATE_UPDATE, $$new($StringArray, {"--module-version"_s}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$14, true, $GNUStyleOptions$OptionType::CREATE_UPDATE, $$new($StringArray, {"--hash-modules"_s}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$15, true, $GNUStyleOptions$OptionType::CREATE_UPDATE, $$new($StringArray, {
			"--module-path"_s,
			"-p"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$16, false, $GNUStyleOptions$OptionType::CREATE_UPDATE, $$new($StringArray, {"--do-not-resolve-by-default"_s}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$17, true, $GNUStyleOptions$OptionType::CREATE_UPDATE, $$new($StringArray, {"--warn-if-resolved"_s}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$18, false, $GNUStyleOptions$OptionType::CREATE_UPDATE_INDEX, $$new($StringArray, {
			"--no-compress"_s,
			"-0"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$19, false, $GNUStyleOptions$OptionType::OTHER, $$new($StringArray, {"-P"_s}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$20, true, true, $GNUStyleOptions$OptionType::OTHER, $$new($StringArray, {
			"--help"_s,
			"-h"_s,
			"-?"_s
		}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$21, false, $GNUStyleOptions$OptionType::OTHER, $$new($StringArray, {"--help-extra"_s}))),
		static_cast<$GNUStyleOptions$Option*>($$new($GNUStyleOptions$22, false, $GNUStyleOptions$OptionType::OTHER, $$new($StringArray, {"--version"_s})))
	}));
}

GNUStyleOptions::GNUStyleOptions() {
}

$Class* GNUStyleOptions::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GNUStyleOptions$$Lambda$printUsageTryHelp::classInfo$.name)) {
			return GNUStyleOptions$$Lambda$printUsageTryHelp::load$(name, initialize);
		}
	}
	$loadClass(GNUStyleOptions, name, initialize, &_GNUStyleOptions_ClassInfo_, clinit$GNUStyleOptions, allocate$GNUStyleOptions);
	return class$;
}

$Class* GNUStyleOptions::class$ = nullptr;

		} // jar
	} // tools
} // sun