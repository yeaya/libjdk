#include <java/awt/dnd/SerializationTester$1.h>
#include <java/awt/dnd/SerializationTester.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

void SerializationTester$1::init$() {
	$OutputStream::init$();
}

void SerializationTester$1::write(int32_t b) {
}

SerializationTester$1::SerializationTester$1() {
}

$Class* SerializationTester$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SerializationTester$1, init$, void)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(SerializationTester$1, write, void, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.dnd.SerializationTester",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.dnd.SerializationTester$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.dnd.SerializationTester$1",
		"java.io.OutputStream",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.dnd.SerializationTester"
	};
	$loadClass(SerializationTester$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SerializationTester$1));
	});
	return class$;
}

$Class* SerializationTester$1::class$ = nullptr;

		} // dnd
	} // awt
} // java