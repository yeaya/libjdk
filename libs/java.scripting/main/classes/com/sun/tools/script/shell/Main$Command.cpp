#include <com/sun/tools/script/shell/Main$Command.h>
#include <com/sun/tools/script/shell/Main.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace script {
				namespace shell {

$Class* Main$Command::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Main$Command, run, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.script.shell.Main$Command", "com.sun.tools.script.shell.Main", "Command", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.tools.script.shell.Main$Command",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.script.shell.Main"
	};
	$loadClass(Main$Command, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$Command);
	});
	return class$;
}

$Class* Main$Command::class$ = nullptr;

				} // shell
			} // script
		} // tools
	} // sun
} // com