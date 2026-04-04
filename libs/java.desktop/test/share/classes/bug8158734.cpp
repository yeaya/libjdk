#include <bug8158734.h>
#include <bug8158734$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef TYPE
#undef TYPE_2

using $bug8158734$1 = ::bug8158734$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$String* bug8158734::TYPE = nullptr;
$String* bug8158734::TYPE_2 = nullptr;
bool bug8158734::myClassloaderWasUsed = false;

void bug8158734::init$() {
}

void bug8158734::main($StringArray* args) {
	$init(bug8158734);
	$SwingUtilities::invokeAndWait($$new($bug8158734$1));
}

void bug8158734::clinit$($Class* clazz) {
	$assignStatic(bug8158734::TYPE, "test/test"_s);
	$assignStatic(bug8158734::TYPE_2, "test2/test2"_s);
	bug8158734::myClassloaderWasUsed = false;
}

bug8158734::bug8158734() {
}

$Class* bug8158734::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(bug8158734, TYPE)},
		{"TYPE_2", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(bug8158734, TYPE_2)},
		{"myClassloaderWasUsed", "Z", nullptr, $STATIC, $staticField(bug8158734, myClassloaderWasUsed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8158734, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8158734, main, void, $StringArray*), "java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8158734$MyClassloader", "bug8158734", "MyClassloader", $STATIC},
		{"bug8158734$MyEditorKit", "bug8158734", "MyEditorKit", $STATIC},
		{"bug8158734$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8158734",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8158734$MyClassloader,bug8158734$MyEditorKit,bug8158734$1"
	};
	$loadClass(bug8158734, name, initialize, &classInfo$$, bug8158734::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8158734);
	});
	return class$;
}

$Class* bug8158734::class$ = nullptr;