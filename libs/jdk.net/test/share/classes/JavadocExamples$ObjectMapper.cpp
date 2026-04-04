#include <JavadocExamples$ObjectMapper.h>
#include <JavadocExamples.h>
#include <java/io/InputStream.h>
#include <java/lang/Error.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/UndeclaredThrowableException.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UndeclaredThrowableException = ::java::lang::reflect::UndeclaredThrowableException;

void JavadocExamples$ObjectMapper::init$() {
}

$Object* JavadocExamples$ObjectMapper::readValue($InputStream* is, $Class* targetType) {
	$var($bytes, bytes, $nc(is)->readAllBytes());
	return map(bytes, targetType);
}

$Object* JavadocExamples$ObjectMapper::map($bytes* bytes, $Class* targetType) {
	$useLocalObjectStack();
	$load(JavadocExamples$ObjectMapper);
	$beforeCallerSensitive();
	try {
		return $$nc($nc(targetType)->getConstructor($$new($ClassArray, {$getClass($bytes)})))->newInstance($$new($ObjectArray, {bytes}));
	} catch ($RuntimeException& x) {
		$throw(x);
	} catch ($Error& x) {
		$throw(x);
	} catch ($Exception& x) {
		$throwNew($UndeclaredThrowableException, x);
	}
	$shouldNotReachHere();
}

JavadocExamples$ObjectMapper::JavadocExamples$ObjectMapper() {
}

$Class* JavadocExamples$ObjectMapper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JavadocExamples$ObjectMapper, init$, void)},
		{"map", "([BLjava/lang/Class;)Ljava/lang/Object;", "<W:Ljava/lang/Object;>([BLjava/lang/Class<TW;>;)TW;", $STATIC, $staticMethod(JavadocExamples$ObjectMapper, map, $Object*, $bytes*, $Class*)},
		{"readValue", "(Ljava/io/InputStream;Ljava/lang/Class;)Ljava/lang/Object;", "<W:Ljava/lang/Object;>(Ljava/io/InputStream;Ljava/lang/Class<TW;>;)TW;", 0, $virtualMethod(JavadocExamples$ObjectMapper, readValue, $Object*, $InputStream*, $Class*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JavadocExamples$ObjectMapper", "JavadocExamples", "ObjectMapper", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JavadocExamples$ObjectMapper",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JavadocExamples"
	};
	$loadClass(JavadocExamples$ObjectMapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavadocExamples$ObjectMapper);
	});
	return class$;
}

$Class* JavadocExamples$ObjectMapper::class$ = nullptr;