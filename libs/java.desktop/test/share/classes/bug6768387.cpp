#include <bug6768387.h>
#include <bug6768387$1.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6768387$1 = ::bug6768387$1;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6768387::init$() {
}

void bug6768387::createGui() {
	$useLocalObjectStack();
	$var($JTable, table, $new($JTable));
	$var($OutputStream, os, nullptr);
	$var($ObjectOutputStream, out, nullptr);
	try {
		$assign(os, $new($ByteArrayOutputStream));
		$assign(out, $new($ObjectOutputStream, os));
		out->writeObject(table);
		out->close();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, ex);
	}
}

void bug6768387::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6768387$1));
}

bug6768387::bug6768387() {
}

$Class* bug6768387::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6768387, init$, void)},
		{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6768387, createGui, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6768387, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6768387$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6768387",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6768387$1"
	};
	$loadClass(bug6768387, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6768387);
	});
	return class$;
}

$Class* bug6768387::class$ = nullptr;