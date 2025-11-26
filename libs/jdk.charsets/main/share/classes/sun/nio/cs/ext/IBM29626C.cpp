#include <sun/nio/cs/ext/IBM29626C.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM29626C$Decoder.h>
#include <sun/nio/cs/ext/IBM29626C$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $IBM29626C$Decoder = ::sun::nio::cs::ext::IBM29626C$Decoder;
using $IBM29626C$Encoder = ::sun::nio::cs::ext::IBM29626C$Encoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM29626C_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM29626C::*)()>(&IBM29626C::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM29626C_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM29626C$Encoder", "sun.nio.cs.ext.IBM29626C", "Encoder", $STATIC},
	{"sun.nio.cs.ext.IBM29626C$Decoder", "sun.nio.cs.ext.IBM29626C", "Decoder", $STATIC},
	{}
};

$ClassInfo _IBM29626C_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM29626C",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM29626C_MethodInfo_,
	nullptr,
	nullptr,
	_IBM29626C_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM29626C$Encoder,sun.nio.cs.ext.IBM29626C$Decoder"
};

$Object* allocate$IBM29626C($Class* clazz) {
	return $of($alloc(IBM29626C));
}

int32_t IBM29626C::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM29626C::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM29626C::toString() {
	 return this->$Charset::toString();
}

$Object* IBM29626C::clone() {
	 return this->$Charset::clone();
}

void IBM29626C::finalize() {
	this->$Charset::finalize();
}

void IBM29626C::init$() {
	$Charset::init$("x-IBM29626C"_s, $($ExtendedCharsets::aliasesFor("x-IBM29626C"_s)));
}

$String* IBM29626C::historicalName() {
	return "Cp29626C"_s;
}

bool IBM29626C::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(IBM29626C, cs)));
}

$CharsetDecoder* IBM29626C::newDecoder() {
	return $new($IBM29626C$Decoder, this);
}

$CharsetEncoder* IBM29626C::newEncoder() {
	return $new($IBM29626C$Encoder, this);
}

IBM29626C::IBM29626C() {
}

$Class* IBM29626C::load$($String* name, bool initialize) {
	$loadClass(IBM29626C, name, initialize, &_IBM29626C_ClassInfo_, allocate$IBM29626C);
	return class$;
}

$Class* IBM29626C::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun