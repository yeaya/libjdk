#include <java/awt/dnd/SerializationTester.h>
#include <java/awt/dnd/SerializationTester$1.h>
#include <java/io/IOException.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <jcpp.h>

using $SerializationTester$1 = ::java::awt::dnd::SerializationTester$1;
using $IOException = ::java::io::IOException;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$ObjectOutputStream* SerializationTester::stream = nullptr;

bool SerializationTester::test(Object$* obj) {
	$init(SerializationTester);
	if (!($instanceOf($Serializable, obj))) {
		return false;
	}
	$var($Throwable, var$0, nullptr);
	bool var$2 = false;
	bool return$1 = false;
	try {
		try {
			$nc(SerializationTester::stream)->writeObject(obj);
		} catch ($IOException& e) {
			var$2 = false;
			return$1 = true;
			goto $finally;
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		try {
			$nc(SerializationTester::stream)->reset();
		} catch ($IOException& e) {
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	return true;
}

void SerializationTester::init$() {
}

void SerializationTester::clinit$($Class* clazz) {
	{
		try {
			$assignStatic(SerializationTester::stream, $new($ObjectOutputStream, $$new($SerializationTester$1)));
		} catch ($IOException& cannotHappen) {
		}
	}
}

SerializationTester::SerializationTester() {
}

$Class* SerializationTester::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stream", "Ljava/io/ObjectOutputStream;", nullptr, $PRIVATE | $STATIC, $staticField(SerializationTester, stream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SerializationTester, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $STATIC, $staticMethod(SerializationTester, test, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.dnd.SerializationTester$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.dnd.SerializationTester",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.dnd.SerializationTester$1"
	};
	$loadClass(SerializationTester, name, initialize, &classInfo$$, SerializationTester::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SerializationTester);
	});
	return class$;
}

$Class* SerializationTester::class$ = nullptr;

		} // dnd
	} // awt
} // java