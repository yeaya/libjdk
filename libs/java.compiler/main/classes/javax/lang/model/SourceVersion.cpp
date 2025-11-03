#include <javax/lang/model/SourceVersion.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Enum.h>
#include <java/lang/Math.h>
#include <java/lang/Runtime$Version.h>
#include <java/lang/Runtime.h>
#include <jcpp.h>

#undef RELEASE_0
#undef RELEASE_1
#undef RELEASE_10
#undef RELEASE_11
#undef RELEASE_12
#undef RELEASE_13
#undef RELEASE_14
#undef RELEASE_15
#undef RELEASE_16
#undef RELEASE_17
#undef RELEASE_2
#undef RELEASE_3
#undef RELEASE_4
#undef RELEASE_5
#undef RELEASE_6
#undef RELEASE_7
#undef RELEASE_8
#undef RELEASE_9

using $SourceVersionArray = $Array<::javax::lang::model::SourceVersion>;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $Runtime$Version = ::java::lang::Runtime$Version;

namespace javax {
	namespace lang {
		namespace model {

$FieldInfo _SourceVersion_FieldInfo_[] = {
	{"RELEASE_0", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_0)},
	{"RELEASE_1", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_1)},
	{"RELEASE_2", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_2)},
	{"RELEASE_3", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_3)},
	{"RELEASE_4", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_4)},
	{"RELEASE_5", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_5)},
	{"RELEASE_6", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_6)},
	{"RELEASE_7", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_7)},
	{"RELEASE_8", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_8)},
	{"RELEASE_9", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_9)},
	{"RELEASE_10", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_10)},
	{"RELEASE_11", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_11)},
	{"RELEASE_12", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_12)},
	{"RELEASE_13", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_13)},
	{"RELEASE_14", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_14)},
	{"RELEASE_15", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_15)},
	{"RELEASE_16", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_16)},
	{"RELEASE_17", "Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SourceVersion, RELEASE_17)},
	{"$VALUES", "[Ljavax/lang/model/SourceVersion;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SourceVersion, $VALUES)},
	{"latestSupported", "Ljavax/lang/model/SourceVersion;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SourceVersion, latestSupported$)},
	{}
};

$MethodInfo _SourceVersion_MethodInfo_[] = {
	{"$values", "()[Ljavax/lang/model/SourceVersion;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SourceVersionArray*(*)()>(&SourceVersion::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(SourceVersion::*)($String*,int32_t)>(&SourceVersion::init$))},
	{"getLatestSupported", "()Ljavax/lang/model/SourceVersion;", nullptr, $PRIVATE | $STATIC, $method(static_cast<SourceVersion*(*)()>(&SourceVersion::getLatestSupported))},
	{"isIdentifier", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($CharSequence*)>(&SourceVersion::isIdentifier))},
	{"isKeyword", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($CharSequence*)>(&SourceVersion::isKeyword))},
	{"isKeyword", "(Ljava/lang/CharSequence;Ljavax/lang/model/SourceVersion;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($CharSequence*,SourceVersion*)>(&SourceVersion::isKeyword))},
	{"isName", "(Ljava/lang/CharSequence;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($CharSequence*)>(&SourceVersion::isName))},
	{"isName", "(Ljava/lang/CharSequence;Ljavax/lang/model/SourceVersion;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($CharSequence*,SourceVersion*)>(&SourceVersion::isName))},
	{"latest", "()Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SourceVersion*(*)()>(&SourceVersion::latest))},
	{"latestSupported", "()Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SourceVersion*(*)()>(&SourceVersion::latestSupported))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SourceVersion*(*)($String*)>(&SourceVersion::valueOf))},
	{"values", "()[Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SourceVersionArray*(*)()>(&SourceVersion::values))},
	{}
};

$ClassInfo _SourceVersion_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"javax.lang.model.SourceVersion",
	"java.lang.Enum",
	nullptr,
	_SourceVersion_FieldInfo_,
	_SourceVersion_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/lang/model/SourceVersion;>;"
};

$Object* allocate$SourceVersion($Class* clazz) {
	return $of($alloc(SourceVersion));
}

SourceVersion* SourceVersion::RELEASE_0 = nullptr;
SourceVersion* SourceVersion::RELEASE_1 = nullptr;
SourceVersion* SourceVersion::RELEASE_2 = nullptr;
SourceVersion* SourceVersion::RELEASE_3 = nullptr;
SourceVersion* SourceVersion::RELEASE_4 = nullptr;
SourceVersion* SourceVersion::RELEASE_5 = nullptr;
SourceVersion* SourceVersion::RELEASE_6 = nullptr;
SourceVersion* SourceVersion::RELEASE_7 = nullptr;
SourceVersion* SourceVersion::RELEASE_8 = nullptr;
SourceVersion* SourceVersion::RELEASE_9 = nullptr;
SourceVersion* SourceVersion::RELEASE_10 = nullptr;
SourceVersion* SourceVersion::RELEASE_11 = nullptr;
SourceVersion* SourceVersion::RELEASE_12 = nullptr;
SourceVersion* SourceVersion::RELEASE_13 = nullptr;
SourceVersion* SourceVersion::RELEASE_14 = nullptr;
SourceVersion* SourceVersion::RELEASE_15 = nullptr;
SourceVersion* SourceVersion::RELEASE_16 = nullptr;
SourceVersion* SourceVersion::RELEASE_17 = nullptr;
$SourceVersionArray* SourceVersion::$VALUES = nullptr;
SourceVersion* SourceVersion::latestSupported$ = nullptr;

$SourceVersionArray* SourceVersion::$values() {
	$init(SourceVersion);
	return $new($SourceVersionArray, {
		SourceVersion::RELEASE_0,
		SourceVersion::RELEASE_1,
		SourceVersion::RELEASE_2,
		SourceVersion::RELEASE_3,
		SourceVersion::RELEASE_4,
		SourceVersion::RELEASE_5,
		SourceVersion::RELEASE_6,
		SourceVersion::RELEASE_7,
		SourceVersion::RELEASE_8,
		SourceVersion::RELEASE_9,
		SourceVersion::RELEASE_10,
		SourceVersion::RELEASE_11,
		SourceVersion::RELEASE_12,
		SourceVersion::RELEASE_13,
		SourceVersion::RELEASE_14,
		SourceVersion::RELEASE_15,
		SourceVersion::RELEASE_16,
		SourceVersion::RELEASE_17
	});
}

$SourceVersionArray* SourceVersion::values() {
	$init(SourceVersion);
	return $cast($SourceVersionArray, SourceVersion::$VALUES->clone());
}

SourceVersion* SourceVersion::valueOf($String* name) {
	$init(SourceVersion);
	return $cast(SourceVersion, $Enum::valueOf(SourceVersion::class$, name));
}

void SourceVersion::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

SourceVersion* SourceVersion::latest() {
	$init(SourceVersion);
	return SourceVersion::RELEASE_17;
}

SourceVersion* SourceVersion::getLatestSupported() {
	$init(SourceVersion);
	$useLocalCurrentObjectStackCache();
	int32_t intVersion = $nc($($Runtime::version()))->feature();
	return (intVersion >= 11) ? valueOf($$str({"RELEASE_"_s, $$str($Math::min(17, intVersion))})) : SourceVersion::RELEASE_10;
}

SourceVersion* SourceVersion::latestSupported() {
	$init(SourceVersion);
	return SourceVersion::latestSupported$;
}

bool SourceVersion::isIdentifier($CharSequence* name) {
	$init(SourceVersion);
	$var($String, id, $nc(name)->toString());
	if ($nc(id)->length() == 0) {
		return false;
	}
	int32_t cp = $nc(id)->codePointAt(0);
	if (!$Character::isJavaIdentifierStart(cp)) {
		return false;
	}
	for (int32_t i = $Character::charCount(cp); i < id->length(); i += $Character::charCount(cp)) {
		cp = id->codePointAt(i);
		if (!$Character::isJavaIdentifierPart(cp)) {
			return false;
		}
	}
	return true;
}

bool SourceVersion::isName($CharSequence* name) {
	$init(SourceVersion);
	return isName(name, $(latest()));
}

bool SourceVersion::isName($CharSequence* name, SourceVersion* version) {
	$init(SourceVersion);
	$useLocalCurrentObjectStackCache();
	$var($String, id, $nc(name)->toString());
	{
		$var($StringArray, arr$, $nc(id)->split("\\."_s, -1));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				bool var$0 = !isIdentifier(s);
				if (var$0 || isKeyword(s, version)) {
					return false;
				}
			}
		}
	}
	return true;
}

bool SourceVersion::isKeyword($CharSequence* s) {
	$init(SourceVersion);
	return isKeyword(s, $(latest()));
}

bool SourceVersion::isKeyword($CharSequence* s, SourceVersion* version) {
	$init(SourceVersion);
	$useLocalCurrentObjectStackCache();
	$var($String, id, $nc(s)->toString());
	{
		$var($String, s13823$, id);
		int32_t tmp13823$ = -1;
		switch ($nc(s13823$)->hashCode()) {
		case 0x6AF8DD53:
			{
				if (s13823$->equals("strictfp"_s)) {
					tmp13823$ = 0;
				}
				break;
			}
		case (int32_t)0xAC107346:
			{
				if (s13823$->equals("assert"_s)) {
					tmp13823$ = 1;
				}
				break;
			}
		case 0x002F9501:
			{
				if (s13823$->equals("enum"_s)) {
					tmp13823$ = 2;
				}
				break;
			}
		case 95:
			{
				if (s13823$->equals("_"_s)) {
					tmp13823$ = 3;
				}
				break;
			}
		case (int32_t)0xC5BDB269:
			{
				if (s13823$->equals("public"_s)) {
					tmp13823$ = 4;
				}
				break;
			}
		case (int32_t)0xDBBA6BAE:
			{
				if (s13823$->equals("protected"_s)) {
					tmp13823$ = 5;
				}
				break;
			}
		case (int32_t)0xED412583:
			{
				if (s13823$->equals("private"_s)) {
					tmp13823$ = 6;
				}
				break;
			}
		case 0x6749F022:
			{
				if (s13823$->equals("abstract"_s)) {
					tmp13823$ = 7;
				}
				break;
			}
		case (int32_t)0xCACDCE6E:
			{
				if (s13823$->equals("static"_s)) {
					tmp13823$ = 8;
				}
				break;
			}
		case 0x05CEC176:
			{
				if (s13823$->equals("final"_s)) {
					tmp13823$ = 9;
				}
				break;
			}
		case 0x3EBFA28A:
			{
				if (s13823$->equals("transient"_s)) {
					tmp13823$ = 10;
				}
				break;
			}
		case (int32_t)0x8F76FD9C:
			{
				if (s13823$->equals("volatile"_s)) {
					tmp13823$ = 11;
				}
				break;
			}
		case (int32_t)0xA8958514:
			{
				if (s13823$->equals("synchronized"_s)) {
					tmp13823$ = 12;
				}
				break;
			}
		case (int32_t)0xC1425017:
			{
				if (s13823$->equals("native"_s)) {
					tmp13823$ = 13;
				}
				break;
			}
		case 0x05A5A978:
			{
				if (s13823$->equals("class"_s)) {
					tmp13823$ = 14;
				}
				break;
			}
		case 0x1DF56D39:
			{
				if (s13823$->equals("interface"_s)) {
					tmp13823$ = 15;
				}
				break;
			}
		case (int32_t)0xB22D2499:
			{
				if (s13823$->equals("extends"_s)) {
					tmp13823$ = 16;
				}
				break;
			}
		case (int32_t)0xCFE53446:
			{
				if (s13823$->equals("package"_s)) {
					tmp13823$ = 17;
				}
				break;
			}
		case (int32_t)0xCBE1364D:
			{
				if (s13823$->equals("throws"_s)) {
					tmp13823$ = 18;
				}
				break;
			}
		case (int32_t)0xC97057B0:
			{
				if (s13823$->equals("implements"_s)) {
					tmp13823$ = 19;
				}
				break;
			}
		case 0x03DB6C28:
			{
				if (s13823$->equals("boolean"_s)) {
					tmp13823$ = 20;
				}
				break;
			}
		case 0x002E6108:
			{
				if (s13823$->equals("byte"_s)) {
					tmp13823$ = 21;
				}
				break;
			}
		case 0x002E9356:
			{
				if (s13823$->equals("char"_s)) {
					tmp13823$ = 22;
				}
				break;
			}
		case 0x0685847C:
			{
				if (s13823$->equals("short"_s)) {
					tmp13823$ = 23;
				}
				break;
			}
		case 0x000197EF:
			{
				if (s13823$->equals("int"_s)) {
					tmp13823$ = 24;
				}
				break;
			}
		case 0x0032C67C:
			{
				if (s13823$->equals("long"_s)) {
					tmp13823$ = 25;
				}
				break;
			}
		case 0x05D0225C:
			{
				if (s13823$->equals("float"_s)) {
					tmp13823$ = 26;
				}
				break;
			}
		case (int32_t)0xB0F77BD1:
			{
				if (s13823$->equals("double"_s)) {
					tmp13823$ = 27;
				}
				break;
			}
		case 0x00375194:
			{
				if (s13823$->equals("void"_s)) {
					tmp13823$ = 28;
				}
				break;
			}
		case 3357:
			{
				if (s13823$->equals("if"_s)) {
					tmp13823$ = 29;
				}
				break;
			}
		case 0x002F8D39:
			{
				if (s13823$->equals("else"_s)) {
					tmp13823$ = 30;
				}
				break;
			}
		case 0x0001C1BB:
			{
				if (s13823$->equals("try"_s)) {
					tmp13823$ = 31;
				}
				break;
			}
		case 0x05A0EEBB:
			{
				if (s13823$->equals("catch"_s)) {
					tmp13823$ = 32;
				}
				break;
			}
		case (int32_t)0xCD244983:
			{
				if (s13823$->equals("finally"_s)) {
					tmp13823$ = 33;
				}
				break;
			}
		case 3211:
			{
				if (s13823$->equals("do"_s)) {
					tmp13823$ = 34;
				}
				break;
			}
		case 0x06BDCB31:
			{
				if (s13823$->equals("while"_s)) {
					tmp13823$ = 35;
				}
				break;
			}
		case 0x00018CC9:
			{
				if (s13823$->equals("for"_s)) {
					tmp13823$ = 36;
				}
				break;
			}
		case (int32_t)0xDE312CA7:
			{
				if (s13823$->equals("continue"_s)) {
					tmp13823$ = 37;
				}
				break;
			}
		case (int32_t)0xCAFBB734:
			{
				if (s13823$->equals("switch"_s)) {
					tmp13823$ = 38;
				}
				break;
			}
		case 0x002E7B30:
			{
				if (s13823$->equals("case"_s)) {
					tmp13823$ = 39;
				}
				break;
			}
		case 0x5C13D641:
			{
				if (s13823$->equals("default"_s)) {
					tmp13823$ = 40;
				}
				break;
			}
		case 0x059A58FF:
			{
				if (s13823$->equals("break"_s)) {
					tmp13823$ = 41;
				}
				break;
			}
		case 0x0693A6E6:
			{
				if (s13823$->equals("throw"_s)) {
					tmp13823$ = 42;
				}
				break;
			}
		case (int32_t)0xC84E3D30:
			{
				if (s13823$->equals("return"_s)) {
					tmp13823$ = 43;
				}
				break;
			}
		case 0x00364E9E:
			{
				if (s13823$->equals("this"_s)) {
					tmp13823$ = 44;
				}
				break;
			}
		case 0x0001A9A0:
			{
				if (s13823$->equals("new"_s)) {
					tmp13823$ = 45;
				}
				break;
			}
		case 0x068B6F7B:
			{
				if (s13823$->equals("super"_s)) {
					tmp13823$ = 46;
				}
				break;
			}
		case (int32_t)0xB96173A5:
			{
				if (s13823$->equals("import"_s)) {
					tmp13823$ = 47;
				}
				break;
			}
		case 0x35C3D12C:
			{
				if (s13823$->equals("instanceof"_s)) {
					tmp13823$ = 48;
				}
				break;
			}
		case 0x00308163:
			{
				if (s13823$->equals("goto"_s)) {
					tmp13823$ = 49;
				}
				break;
			}
		case 0x05A73763:
			{
				if (s13823$->equals("const"_s)) {
					tmp13823$ = 50;
				}
				break;
			}
		case 0x0033C587:
			{
				if (s13823$->equals("null"_s)) {
					tmp13823$ = 51;
				}
				break;
			}
		case 0x0036758E:
			{
				if (s13823$->equals("true"_s)) {
					tmp13823$ = 52;
				}
				break;
			}
		case 0x05CB1923:
			{
				if (s13823$->equals("false"_s)) {
					tmp13823$ = 53;
				}
				break;
			}
		}
		switch (tmp13823$) {
		case 0:
			{
				return $nc(version)->compareTo(static_cast<$Enum*>(SourceVersion::RELEASE_2)) >= 0;
			}
		case 1:
			{
				return $nc(version)->compareTo(static_cast<$Enum*>(SourceVersion::RELEASE_4)) >= 0;
			}
		case 2:
			{
				return $nc(version)->compareTo(static_cast<$Enum*>(SourceVersion::RELEASE_5)) >= 0;
			}
		case 3:
			{
				return $nc(version)->compareTo(static_cast<$Enum*>(SourceVersion::RELEASE_9)) >= 0;
			}
		case 4:
			{}
		case 5:
			{}
		case 6:
			{}
		case 7:
			{}
		case 8:
			{}
		case 9:
			{}
		case 10:
			{}
		case 11:
			{}
		case 12:
			{}
		case 13:
			{}
		case 14:
			{}
		case 15:
			{}
		case 16:
			{}
		case 17:
			{}
		case 18:
			{}
		case 19:
			{}
		case 20:
			{}
		case 21:
			{}
		case 22:
			{}
		case 23:
			{}
		case 24:
			{}
		case 25:
			{}
		case 26:
			{}
		case 27:
			{}
		case 28:
			{}
		case 29:
			{}
		case 30:
			{}
		case 31:
			{}
		case 32:
			{}
		case 33:
			{}
		case 34:
			{}
		case 35:
			{}
		case 36:
			{}
		case 37:
			{}
		case 38:
			{}
		case 39:
			{}
		case 40:
			{}
		case 41:
			{}
		case 42:
			{}
		case 43:
			{}
		case 44:
			{}
		case 45:
			{}
		case 46:
			{}
		case 47:
			{}
		case 48:
			{}
		case 49:
			{}
		case 50:
			{}
		case 51:
			{}
		case 52:
			{}
		case 53:
			{
				return true;
			}
		default:
			{
				return false;
			}
		}
	}
}

void clinit$SourceVersion($Class* class$) {
	$assignStatic(SourceVersion::RELEASE_0, $new(SourceVersion, "RELEASE_0"_s, 0));
	$assignStatic(SourceVersion::RELEASE_1, $new(SourceVersion, "RELEASE_1"_s, 1));
	$assignStatic(SourceVersion::RELEASE_2, $new(SourceVersion, "RELEASE_2"_s, 2));
	$assignStatic(SourceVersion::RELEASE_3, $new(SourceVersion, "RELEASE_3"_s, 3));
	$assignStatic(SourceVersion::RELEASE_4, $new(SourceVersion, "RELEASE_4"_s, 4));
	$assignStatic(SourceVersion::RELEASE_5, $new(SourceVersion, "RELEASE_5"_s, 5));
	$assignStatic(SourceVersion::RELEASE_6, $new(SourceVersion, "RELEASE_6"_s, 6));
	$assignStatic(SourceVersion::RELEASE_7, $new(SourceVersion, "RELEASE_7"_s, 7));
	$assignStatic(SourceVersion::RELEASE_8, $new(SourceVersion, "RELEASE_8"_s, 8));
	$assignStatic(SourceVersion::RELEASE_9, $new(SourceVersion, "RELEASE_9"_s, 9));
	$assignStatic(SourceVersion::RELEASE_10, $new(SourceVersion, "RELEASE_10"_s, 10));
	$assignStatic(SourceVersion::RELEASE_11, $new(SourceVersion, "RELEASE_11"_s, 11));
	$assignStatic(SourceVersion::RELEASE_12, $new(SourceVersion, "RELEASE_12"_s, 12));
	$assignStatic(SourceVersion::RELEASE_13, $new(SourceVersion, "RELEASE_13"_s, 13));
	$assignStatic(SourceVersion::RELEASE_14, $new(SourceVersion, "RELEASE_14"_s, 14));
	$assignStatic(SourceVersion::RELEASE_15, $new(SourceVersion, "RELEASE_15"_s, 15));
	$assignStatic(SourceVersion::RELEASE_16, $new(SourceVersion, "RELEASE_16"_s, 16));
	$assignStatic(SourceVersion::RELEASE_17, $new(SourceVersion, "RELEASE_17"_s, 17));
	$assignStatic(SourceVersion::$VALUES, SourceVersion::$values());
	$assignStatic(SourceVersion::latestSupported$, SourceVersion::getLatestSupported());
}

SourceVersion::SourceVersion() {
}

$Class* SourceVersion::load$($String* name, bool initialize) {
	$loadClass(SourceVersion, name, initialize, &_SourceVersion_ClassInfo_, clinit$SourceVersion, allocate$SourceVersion);
	return class$;
}

$Class* SourceVersion::class$ = nullptr;

		} // model
	} // lang
} // javax