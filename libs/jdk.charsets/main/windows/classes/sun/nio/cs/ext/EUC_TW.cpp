#include <sun/nio/cs/ext/EUC_TW.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ext/EUC_TW$Decoder.h>
#include <sun/nio/cs/ext/EUC_TW$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <jcpp.h>

#undef EUC_TW
#undef SS2

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $EUC_TW$Decoder = ::sun::nio::cs::ext::EUC_TW$Decoder;
using $EUC_TW$Encoder = ::sun::nio::cs::ext::EUC_TW$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _EUC_TW_FieldInfo_[] = {
	{"SS2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EUC_TW, SS2)},
	{}
};

$MethodInfo _EUC_TW_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EUC_TW::*)()>(&EUC_TW::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _EUC_TW_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.EUC_TW$Encoder", "sun.nio.cs.ext.EUC_TW", "Encoder", $PUBLIC | $STATIC},
	{"sun.nio.cs.ext.EUC_TW$Decoder", "sun.nio.cs.ext.EUC_TW", "Decoder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _EUC_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.EUC_TW",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	_EUC_TW_FieldInfo_,
	_EUC_TW_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_TW_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.EUC_TW$Encoder,sun.nio.cs.ext.EUC_TW$Decoder"
};

$Object* allocate$EUC_TW($Class* clazz) {
	return $of($alloc(EUC_TW));
}

int32_t EUC_TW::hashCode() {
	 return this->$Charset::hashCode();
}

bool EUC_TW::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* EUC_TW::toString() {
	 return this->$Charset::toString();
}

$Object* EUC_TW::clone() {
	 return this->$Charset::clone();
}

void EUC_TW::finalize() {
	this->$Charset::finalize();
}

void EUC_TW::init$() {
	$Charset::init$("x-EUC-TW"_s, $($ExtendedCharsets::aliasesFor("x-EUC-TW"_s)));
}

$String* EUC_TW::historicalName() {
	return "EUC_TW"_s;
}

bool EUC_TW::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(EUC_TW, cs)));
}

$CharsetDecoder* EUC_TW::newDecoder() {
	return $new($EUC_TW$Decoder, this);
}

$CharsetEncoder* EUC_TW::newEncoder() {
	return $new($EUC_TW$Encoder, this);
}

EUC_TW::EUC_TW() {
}

$Class* EUC_TW::load$($String* name, bool initialize) {
	$loadClass(EUC_TW, name, initialize, &_EUC_TW_ClassInfo_, allocate$EUC_TW);
	return class$;
}

$Class* EUC_TW::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun