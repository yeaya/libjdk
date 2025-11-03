#include <sun/nio/cs/ext/IBM1122.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1122$Holder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $IBM1122$Holder = ::sun::nio::cs::ext::IBM1122$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1122_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1122::*)()>(&IBM1122::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1122_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1122$Holder", "sun.nio.cs.ext.IBM1122", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1122_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1122",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1122_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1122_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1122$Holder"
};

$Object* allocate$IBM1122($Class* clazz) {
	return $of($alloc(IBM1122));
}

int32_t IBM1122::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1122::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1122::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1122::clone() {
	 return this->$Charset::clone();
}

void IBM1122::finalize() {
	this->$Charset::finalize();
}

void IBM1122::init$() {
	$Charset::init$("x-IBM1122"_s, $($ExtendedCharsets::aliasesFor("x-IBM1122"_s)));
}

$String* IBM1122::historicalName() {
	return "Cp1122"_s;
}

bool IBM1122::contains($Charset* cs) {
	return ($instanceOf(IBM1122, cs));
}

$CharsetDecoder* IBM1122::newDecoder() {
	$init($IBM1122$Holder);
	return $new($SingleByte$Decoder, this, $IBM1122$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1122::newEncoder() {
	$init($IBM1122$Holder);
	return $new($SingleByte$Encoder, this, $IBM1122$Holder::c2b, $IBM1122$Holder::c2bIndex, false);
}

IBM1122::IBM1122() {
}

$Class* IBM1122::load$($String* name, bool initialize) {
	$loadClass(IBM1122, name, initialize, &_IBM1122_ClassInfo_, allocate$IBM1122);
	return class$;
}

$Class* IBM1122::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun