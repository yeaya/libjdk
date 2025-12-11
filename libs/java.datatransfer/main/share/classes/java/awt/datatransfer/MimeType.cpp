#include <java/awt/datatransfer/MimeType.h>

#include <java/awt/datatransfer/MimeTypeParameterList.h>
#include <java/awt/datatransfer/MimeTypeParseException.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/Externalizable.h>
#include <java/io/IOException.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectOutput.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ENGLISH
#undef TSPECIALS

using $MimeTypeParameterList = ::java::awt::datatransfer::MimeTypeParameterList;
using $MimeTypeParseException = ::java::awt::datatransfer::MimeTypeParseException;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $Externalizable = ::java::io::Externalizable;
using $IOException = ::java::io::IOException;
using $ObjectInput = ::java::io::ObjectInput;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace java {
	namespace awt {
		namespace datatransfer {

$FieldInfo _MimeType_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MimeType, serialVersionUID)},
	{"primaryType", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(MimeType, primaryType)},
	{"subType", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(MimeType, subType)},
	{"parameters", "Ljava/awt/datatransfer/MimeTypeParameterList;", nullptr, $PRIVATE | $TRANSIENT, $field(MimeType, parameters)},
	{"TSPECIALS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MimeType, TSPECIALS)},
	{}
};

$MethodInfo _MimeType_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MimeType::*)()>(&MimeType::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MimeType::*)($String*)>(&MimeType::init$)), "java.awt.datatransfer.MimeTypeParseException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MimeType::*)($String*,$String*)>(&MimeType::init$)), "java.awt.datatransfer.MimeTypeParseException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/awt/datatransfer/MimeTypeParameterList;)V", nullptr, $PUBLIC, $method(static_cast<void(MimeType::*)($String*,$String*,$MimeTypeParameterList*)>(&MimeType::init$)), "java.awt.datatransfer.MimeTypeParseException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBaseType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParameters", "()Ljava/awt/datatransfer/MimeTypeParameterList;", nullptr, $PUBLIC},
	{"getPrimaryType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSubType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isTokenChar", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&MimeType::isTokenChar))},
	{"isValidToken", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(MimeType::*)($String*)>(&MimeType::isValidToken))},
	{"match", "(Ljava/awt/datatransfer/MimeType;)Z", nullptr, $PUBLIC},
	{"match", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, nullptr, "java.awt.datatransfer.MimeTypeParseException"},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(MimeType::*)($String*)>(&MimeType::parse)), "java.awt.datatransfer.MimeTypeParseException"},
	{"readExternal", "(Ljava/io/ObjectInput;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"removeParameter", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setParameter", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeExternal", "(Ljava/io/ObjectOutput;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _MimeType_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.datatransfer.MimeType",
	"java.lang.Object",
	"java.io.Externalizable,java.lang.Cloneable",
	_MimeType_FieldInfo_,
	_MimeType_MethodInfo_
};

$Object* allocate$MimeType($Class* clazz) {
	return $of($alloc(MimeType));
}

void MimeType::finalize() {
	this->$Externalizable::finalize();
}

$String* MimeType::TSPECIALS = nullptr;

void MimeType::init$() {
}

void MimeType::init$($String* rawdata) {
	parse(rawdata);
}

void MimeType::init$($String* primary, $String* sub) {
	MimeType::init$(primary, sub, $$new($MimeTypeParameterList));
}

void MimeType::init$($String* primary, $String* sub, $MimeTypeParameterList* mtpl) {
	if (isValidToken(primary)) {
		$init($Locale);
		$set(this, primaryType, $nc(primary)->toLowerCase($Locale::ENGLISH));
	} else {
		$throwNew($MimeTypeParseException, "Primary type is invalid."_s);
	}
	if (isValidToken(sub)) {
		$init($Locale);
		$set(this, subType, $nc(sub)->toLowerCase($Locale::ENGLISH));
	} else {
		$throwNew($MimeTypeParseException, "Sub type is invalid."_s);
	}
	$set(this, parameters, $cast($MimeTypeParameterList, $nc(mtpl)->clone()));
}

int32_t MimeType::hashCode() {
	int32_t code = 0;
	code += $nc(this->primaryType)->hashCode();
	code += $nc(this->subType)->hashCode();
	code += $nc(this->parameters)->hashCode();
	return code;
}

bool MimeType::equals(Object$* thatObject) {
	if (!($instanceOf(MimeType, thatObject))) {
		return false;
	}
	$var(MimeType, that, $cast(MimeType, thatObject));
	bool var$1 = ($nc(this->primaryType)->equals($nc(that)->primaryType));
	bool var$0 = var$1 && ($nc(this->subType)->equals($nc(that)->subType));
	bool isIt = (var$0 && ($nc(this->parameters)->equals($nc(that)->parameters)));
	return isIt;
}

void MimeType::parse($String* rawdata) {
	$useLocalCurrentObjectStackCache();
	int32_t slashIndex = $nc(rawdata)->indexOf((int32_t)u'/');
	int32_t semIndex = rawdata->indexOf((int32_t)u';');
	if ((slashIndex < 0) && (semIndex < 0)) {
		$throwNew($MimeTypeParseException, "Unable to find a sub type."_s);
	} else if ((slashIndex < 0) && (semIndex >= 0)) {
		$throwNew($MimeTypeParseException, "Unable to find a sub type."_s);
	} else if ((slashIndex >= 0) && (semIndex < 0)) {
		$init($Locale);
		$set(this, primaryType, $($(rawdata->substring(0, slashIndex))->trim())->toLowerCase($Locale::ENGLISH));
		$set(this, subType, $($(rawdata->substring(slashIndex + 1))->trim())->toLowerCase($Locale::ENGLISH));
		$set(this, parameters, $new($MimeTypeParameterList));
	} else if (slashIndex < semIndex) {
		$init($Locale);
		$set(this, primaryType, $($(rawdata->substring(0, slashIndex))->trim())->toLowerCase($Locale::ENGLISH));
		$set(this, subType, $($(rawdata->substring(slashIndex + 1, semIndex))->trim())->toLowerCase($Locale::ENGLISH));
		$set(this, parameters, $new($MimeTypeParameterList, $(rawdata->substring(semIndex))));
	} else {
		$throwNew($MimeTypeParseException, "Unable to find a sub type."_s);
	}
	if (!isValidToken(this->primaryType)) {
		$throwNew($MimeTypeParseException, "Primary type is invalid."_s);
	}
	if (!isValidToken(this->subType)) {
		$throwNew($MimeTypeParseException, "Sub type is invalid."_s);
	}
}

$String* MimeType::getPrimaryType() {
	return this->primaryType;
}

$String* MimeType::getSubType() {
	return this->subType;
}

$MimeTypeParameterList* MimeType::getParameters() {
	return $cast($MimeTypeParameterList, $nc(this->parameters)->clone());
}

$String* MimeType::getParameter($String* name) {
	return $nc(this->parameters)->get(name);
}

void MimeType::setParameter($String* name, $String* value) {
	$nc(this->parameters)->set(name, value);
}

void MimeType::removeParameter($String* name) {
	$nc(this->parameters)->remove(name);
}

$String* MimeType::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $(getBaseType()));
	return $concat(var$0, $($nc(this->parameters)->toString()));
}

$String* MimeType::getBaseType() {
	return $str({this->primaryType, "/"_s, this->subType});
}

bool MimeType::match(MimeType* type) {
	$useLocalCurrentObjectStackCache();
	if (type == nullptr) {
		return false;
	}
	bool var$0 = $nc(this->primaryType)->equals($($nc(type)->getPrimaryType()));
	if (var$0) {
		bool var$2 = $nc(this->subType)->equals("*"_s);
		bool var$1 = var$2 || $nc($($nc(type)->getSubType()))->equals("*"_s);
		var$0 = (var$1 || ($nc(this->subType)->equals($($nc(type)->getSubType()))));
	}
	return var$0;
}

bool MimeType::match($String* rawdata) {
	if (rawdata == nullptr) {
		return false;
	}
	return match($$new(MimeType, rawdata));
}

void MimeType::writeExternal($ObjectOutput* out) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, toString());
	if ($nc(s)->length() <= 0x0000FFFF) {
		$nc(out)->writeUTF(s);
	} else {
		$nc(out)->writeByte(0);
		out->writeByte(0);
		out->writeInt(s->length());
		out->write($(s->getBytes()));
	}
}

void MimeType::readExternal($ObjectInput* in) {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $nc(in)->readUTF());
	if (s == nullptr || $nc(s)->length() == 0) {
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		int32_t len = in->readInt();
		while (len-- > 0) {
			baos->write((int32_t)in->readByte());
		}
		$assign(s, baos->toString());
	}
	try {
		parse(s);
	} catch ($MimeTypeParseException& e) {
		$throwNew($IOException, $(e->toString()));
	}
}

$Object* MimeType::clone() {
	$var(MimeType, newObj, nullptr);
	try {
		$assign(newObj, $cast(MimeType, $Externalizable::clone()));
	} catch ($CloneNotSupportedException& cannotHappen) {
	}
	$set($nc(newObj), parameters, $cast($MimeTypeParameterList, $nc(this->parameters)->clone()));
	return $of(newObj);
}

bool MimeType::isTokenChar(char16_t c) {
	$init(MimeType);
	return ((c > 32) && (c < 127)) && ($nc(MimeType::TSPECIALS)->indexOf((int32_t)c) < 0);
}

bool MimeType::isValidToken($String* s) {
	int32_t len = $nc(s)->length();
	if (len > 0) {
		for (int32_t i = 0; i < len; ++i) {
			char16_t c = s->charAt(i);
			if (!isTokenChar(c)) {
				return false;
			}
		}
		return true;
	} else {
		return false;
	}
}

MimeType::MimeType() {
}

void clinit$MimeType($Class* class$) {
	$assignStatic(MimeType::TSPECIALS, "()<>@,;:\\\"/[]?="_s);
}

$Class* MimeType::load$($String* name, bool initialize) {
	$loadClass(MimeType, name, initialize, &_MimeType_ClassInfo_, clinit$MimeType, allocate$MimeType);
	return class$;
}

$Class* MimeType::class$ = nullptr;

		} // datatransfer
	} // awt
} // java