#include <bug5043626$2.h>
#include <bug5043626.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <jcpp.h>

using $bug5043626 = ::bug5043626;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BadLocationException = ::javax::swing::text::BadLocationException;

void bug5043626$2::init$($StringArray* val$result) {
	$set(this, val$result, val$result);
}

void bug5043626$2::run() {
	$useLocalObjectStack();
	try {
		$init($bug5043626);
		$nc(this->val$result)->set(0, $($$nc($nc($bug5043626::doc)->getText(0, $nc($bug5043626::doc)->getLength()))->trim()));
	} catch ($BadLocationException& ex) {
		ex->printStackTrace();
	}
}

bug5043626$2::bug5043626$2() {
}

$Class* bug5043626$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(bug5043626$2, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/String;)V", "()V", 0, $method(bug5043626$2, init$, void, $StringArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug5043626$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug5043626",
		"getText",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug5043626$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug5043626$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug5043626"
	};
	$loadClass(bug5043626$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug5043626$2);
	});
	return class$;
}

$Class* bug5043626$2::class$ = nullptr;