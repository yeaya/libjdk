#include <TestWrite.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/UnsupportedEncodingException.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void TestWrite::init$() {
}

void TestWrite::main($StringArray* args) {
	$useLocalObjectStack();
	$var($ByteArrayOutputStream, bos, nullptr);
	$var($OutputStreamWriter, osw, nullptr);
	$var($bytes, array, nullptr);
	try {
		$assign(bos, $new($ByteArrayOutputStream));
		$assign(osw, $new($OutputStreamWriter, bos, "EUCJIS"_s));
		osw->write(u'a');
		for (int32_t count = 0; count < 10000; ++count) {
			osw->write((char16_t)0x3042);
		}
		osw->close();
		$assign(array, bos->toByteArray());
	} catch ($UnsupportedEncodingException& e) {
		$nc($System::err)->println("Unsupported encoding - EUCJIS. ext  may not be properly installed. ext is   required for the test to run properly "_s);
		$throwNew($Exception, "Environment is incorrect"_s);
	}
}

TestWrite::TestWrite() {
}

$Class* TestWrite::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestWrite, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestWrite, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestWrite",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TestWrite, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestWrite);
	});
	return class$;
}

$Class* TestWrite::class$ = nullptr;