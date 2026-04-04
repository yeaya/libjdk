#include <java/rmi/MarshalledObject$MarshalledObjectOutputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamConstants.h>
#include <java/io/OutputStream.h>
#include <java/rmi/MarshalledObject.h>
#include <sun/rmi/server/MarshalOutputStream.h>
#include <jcpp.h>

#undef PROTOCOL_VERSION_2

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectStreamConstants = ::java::io::ObjectStreamConstants;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MarshalOutputStream = ::sun::rmi::server::MarshalOutputStream;

namespace java {
	namespace rmi {

void MarshalledObject$MarshalledObjectOutputStream::init$($OutputStream* objOut, $OutputStream* locOut) {
	$MarshalOutputStream::init$(objOut);
	this->useProtocolVersion($ObjectStreamConstants::PROTOCOL_VERSION_2);
	$set(this, locOut, $new($ObjectOutputStream, locOut));
	this->hadAnnotations$ = false;
}

bool MarshalledObject$MarshalledObjectOutputStream::hadAnnotations() {
	return this->hadAnnotations$;
}

void MarshalledObject$MarshalledObjectOutputStream::writeLocation($String* loc) {
	this->hadAnnotations$ |= (loc != nullptr);
	$nc(this->locOut)->writeObject(loc);
}

void MarshalledObject$MarshalledObjectOutputStream::flush() {
	$MarshalOutputStream::flush();
	$nc(this->locOut)->flush();
}

MarshalledObject$MarshalledObjectOutputStream::MarshalledObject$MarshalledObjectOutputStream() {
}

$Class* MarshalledObject$MarshalledObjectOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"locOut", "Ljava/io/ObjectOutputStream;", nullptr, $PRIVATE, $field(MarshalledObject$MarshalledObjectOutputStream, locOut)},
		{"hadAnnotations", "Z", nullptr, $PRIVATE, $field(MarshalledObject$MarshalledObjectOutputStream, hadAnnotations$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;Ljava/io/OutputStream;)V", nullptr, 0, $method(MarshalledObject$MarshalledObjectOutputStream, init$, void, $OutputStream*, $OutputStream*), "java.io.IOException"},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(MarshalledObject$MarshalledObjectOutputStream, flush, void), "java.io.IOException"},
		{"hadAnnotations", "()Z", nullptr, 0, $virtualMethod(MarshalledObject$MarshalledObjectOutputStream, hadAnnotations, bool)},
		{"writeLocation", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(MarshalledObject$MarshalledObjectOutputStream, writeLocation, void, $String*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.rmi.MarshalledObject$MarshalledObjectOutputStream", "java.rmi.MarshalledObject", "MarshalledObjectOutputStream", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.rmi.MarshalledObject$MarshalledObjectOutputStream",
		"sun.rmi.server.MarshalOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.rmi.MarshalledObject"
	};
	$loadClass(MarshalledObject$MarshalledObjectOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MarshalledObject$MarshalledObjectOutputStream));
	});
	return class$;
}

$Class* MarshalledObject$MarshalledObjectOutputStream::class$ = nullptr;

	} // rmi
} // java