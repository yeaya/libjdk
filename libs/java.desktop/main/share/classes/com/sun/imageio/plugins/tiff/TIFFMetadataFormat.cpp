#include <com/sun/imageio/plugins/tiff/TIFFMetadataFormat.h>

#include <com/sun/imageio/plugins/tiff/TIFFAttrInfo.h>
#include <com/sun/imageio/plugins/tiff/TIFFElementInfo.h>
#include <java/lang/Comparable.h>
#include <java/lang/Module.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <jcpp.h>

#undef VALUE_NONE

using $TIFFAttrInfo = ::com::sun::imageio::plugins::tiff::TIFFAttrInfo;
using $TIFFElementInfo = ::com::sun::imageio::plugins::tiff::TIFFElementInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFMetadataFormat_FieldInfo_[] = {
	{"elementInfoMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/imageio/plugins/tiff/TIFFElementInfo;>;", $PROTECTED, $field(TIFFMetadataFormat, elementInfoMap)},
	{"attrInfoMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/imageio/plugins/tiff/TIFFAttrInfo;>;", $PROTECTED, $field(TIFFMetadataFormat, attrInfoMap)},
	{"resourceBaseName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(TIFFMetadataFormat, resourceBaseName)},
	{"rootName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(TIFFMetadataFormat, rootName)},
	{}
};

$MethodInfo _TIFFMetadataFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TIFFMetadataFormat, init$, void)},
	{"getAttrInfo", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/imageio/plugins/tiff/TIFFAttrInfo;", nullptr, $PRIVATE, $method(TIFFMetadataFormat, getAttrInfo, $TIFFAttrInfo*, $String*, $String*)},
	{"getAttributeDataType", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getAttributeDataType, int32_t, $String*, $String*)},
	{"getAttributeDefaultValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getAttributeDefaultValue, $String*, $String*, $String*)},
	{"getAttributeDescription", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getAttributeDescription, $String*, $String*, $String*, $Locale*)},
	{"getAttributeEnumerations", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getAttributeEnumerations, $StringArray*, $String*, $String*)},
	{"getAttributeListMaxLength", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getAttributeListMaxLength, int32_t, $String*, $String*)},
	{"getAttributeListMinLength", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getAttributeListMinLength, int32_t, $String*, $String*)},
	{"getAttributeMaxValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getAttributeMaxValue, $String*, $String*, $String*)},
	{"getAttributeMinValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getAttributeMinValue, $String*, $String*, $String*)},
	{"getAttributeNames", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getAttributeNames, $StringArray*, $String*)},
	{"getAttributeValueType", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getAttributeValueType, int32_t, $String*, $String*)},
	{"getChildNames", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getChildNames, $StringArray*, $String*)},
	{"getChildPolicy", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getChildPolicy, int32_t, $String*)},
	{"getElementDescription", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getElementDescription, $String*, $String*, $Locale*)},
	{"getElementInfo", "(Ljava/lang/String;)Lcom/sun/imageio/plugins/tiff/TIFFElementInfo;", nullptr, $PRIVATE, $method(TIFFMetadataFormat, getElementInfo, $TIFFElementInfo*, $String*)},
	{"getElementMaxChildren", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getElementMaxChildren, int32_t, $String*)},
	{"getElementMinChildren", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getElementMinChildren, int32_t, $String*)},
	{"getObjectArrayMaxLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getObjectArrayMaxLength, int32_t, $String*)},
	{"getObjectArrayMinLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getObjectArrayMinLength, int32_t, $String*)},
	{"getObjectClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(TIFFMetadataFormat, getObjectClass, $Class*, $String*)},
	{"getObjectDefaultValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getObjectDefaultValue, $Object*, $String*)},
	{"getObjectEnumerations", "(Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getObjectEnumerations, $ObjectArray*, $String*)},
	{"getObjectMaxValue", "(Ljava/lang/String;)Ljava/lang/Comparable;", "(Ljava/lang/String;)Ljava/lang/Comparable<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(TIFFMetadataFormat, getObjectMaxValue, $Comparable*, $String*)},
	{"getObjectMinValue", "(Ljava/lang/String;)Ljava/lang/Comparable;", "(Ljava/lang/String;)Ljava/lang/Comparable<Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(TIFFMetadataFormat, getObjectMinValue, $Comparable*, $String*)},
	{"getObjectValueType", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getObjectValueType, int32_t, $String*)},
	{"getResource", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(TIFFMetadataFormat, getResource, $String*, $String*, $Locale*)},
	{"getRootName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, getRootName, $String*)},
	{"isAttributeRequired", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(TIFFMetadataFormat, isAttributeRequired, bool, $String*, $String*)},
	{}
};

$ClassInfo _TIFFMetadataFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.imageio.plugins.tiff.TIFFMetadataFormat",
	"java.lang.Object",
	"javax.imageio.metadata.IIOMetadataFormat",
	_TIFFMetadataFormat_FieldInfo_,
	_TIFFMetadataFormat_MethodInfo_
};

$Object* allocate$TIFFMetadataFormat($Class* clazz) {
	return $of($alloc(TIFFMetadataFormat));
}

$String* TIFFMetadataFormat::getRootName() {
	return this->rootName;
}

$String* TIFFMetadataFormat::getResource($String* key, $Locale* locale$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, locale, locale$renamed);
	$beforeCallerSensitive();
	if (locale == nullptr) {
		$assign(locale, $Locale::getDefault());
	}
	try {
		$var($ResourceBundle, bundle, $ResourceBundle::getBundle(this->resourceBaseName, locale, $($of(this)->getClass()->getModule())));
		return $nc(bundle)->getString(key);
	} catch ($MissingResourceException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$TIFFElementInfo* TIFFMetadataFormat::getElementInfo($String* elementName) {
	$useLocalCurrentObjectStackCache();
	if (elementName == nullptr) {
		$throwNew($NullPointerException, "elementName == null!"_s);
	}
	$var($TIFFElementInfo, info, $cast($TIFFElementInfo, $nc(this->elementInfoMap)->get(elementName)));
	if (info == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"No such element: "_s, elementName}));
	}
	return info;
}

$TIFFAttrInfo* TIFFMetadataFormat::getAttrInfo($String* elementName, $String* attrName) {
	$useLocalCurrentObjectStackCache();
	if (elementName == nullptr) {
		$throwNew($NullPointerException, "elementName == null!"_s);
	}
	if (attrName == nullptr) {
		$throwNew($NullPointerException, "attrName == null!"_s);
	}
	$var($String, key, $str({elementName, "/"_s, attrName}));
	$var($TIFFAttrInfo, info, $cast($TIFFAttrInfo, $nc(this->attrInfoMap)->get(key)));
	if (info == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"No such attribute: "_s, key}));
	}
	return info;
}

int32_t TIFFMetadataFormat::getElementMinChildren($String* elementName) {
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	return $nc(info)->minChildren;
}

int32_t TIFFMetadataFormat::getElementMaxChildren($String* elementName) {
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	return $nc(info)->maxChildren;
}

$String* TIFFMetadataFormat::getElementDescription($String* elementName, $Locale* locale) {
	if (!$nc(this->elementInfoMap)->containsKey(elementName)) {
		$throwNew($IllegalArgumentException, $$str({"No such element: "_s, elementName}));
	}
	return getResource(elementName, locale);
}

int32_t TIFFMetadataFormat::getChildPolicy($String* elementName) {
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	return $nc(info)->childPolicy;
}

$StringArray* TIFFMetadataFormat::getChildNames($String* elementName) {
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	return $nc(info)->childNames;
}

$StringArray* TIFFMetadataFormat::getAttributeNames($String* elementName) {
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	return $nc(info)->attributeNames;
}

int32_t TIFFMetadataFormat::getAttributeValueType($String* elementName, $String* attrName) {
	$var($TIFFAttrInfo, info, getAttrInfo(elementName, attrName));
	return $nc(info)->valueType;
}

int32_t TIFFMetadataFormat::getAttributeDataType($String* elementName, $String* attrName) {
	$var($TIFFAttrInfo, info, getAttrInfo(elementName, attrName));
	return $nc(info)->dataType;
}

bool TIFFMetadataFormat::isAttributeRequired($String* elementName, $String* attrName) {
	$var($TIFFAttrInfo, info, getAttrInfo(elementName, attrName));
	return $nc(info)->isRequired;
}

$String* TIFFMetadataFormat::getAttributeDefaultValue($String* elementName, $String* attrName) {
	return nullptr;
}

$StringArray* TIFFMetadataFormat::getAttributeEnumerations($String* elementName, $String* attrName) {
	$throwNew($IllegalArgumentException, "The attribute is not an enumeration."_s);
	$shouldNotReachHere();
}

$String* TIFFMetadataFormat::getAttributeMinValue($String* elementName, $String* attrName) {
	$throwNew($IllegalArgumentException, "The attribute is not a range."_s);
	$shouldNotReachHere();
}

$String* TIFFMetadataFormat::getAttributeMaxValue($String* elementName, $String* attrName) {
	$throwNew($IllegalArgumentException, "The attribute is not a range."_s);
	$shouldNotReachHere();
}

int32_t TIFFMetadataFormat::getAttributeListMinLength($String* elementName, $String* attrName) {
	$var($TIFFAttrInfo, info, getAttrInfo(elementName, attrName));
	return $nc(info)->listMinLength;
}

int32_t TIFFMetadataFormat::getAttributeListMaxLength($String* elementName, $String* attrName) {
	$var($TIFFAttrInfo, info, getAttrInfo(elementName, attrName));
	return $nc(info)->listMaxLength;
}

$String* TIFFMetadataFormat::getAttributeDescription($String* elementName, $String* attrName, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, $str({elementName, "/"_s, attrName}));
	if (!$nc(this->attrInfoMap)->containsKey(key)) {
		$throwNew($IllegalArgumentException, $$str({"No such attribute: "_s, key}));
	}
	return getResource(key, locale);
}

int32_t TIFFMetadataFormat::getObjectValueType($String* elementName) {
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	return $nc(info)->objectValueType;
}

$Class* TIFFMetadataFormat::getObjectClass($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	if ($nc(info)->objectValueType == $IIOMetadataFormat::VALUE_NONE) {
		$throwNew($IllegalArgumentException, $$str({"Element cannot contain an object value: "_s, elementName}));
	}
	return $nc(info)->objectClass;
}

$Object* TIFFMetadataFormat::getObjectDefaultValue($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	if ($nc(info)->objectValueType == $IIOMetadataFormat::VALUE_NONE) {
		$throwNew($IllegalArgumentException, $$str({"Element cannot contain an object value: "_s, elementName}));
	}
	return $of($nc(info)->objectDefaultValue);
}

$ObjectArray* TIFFMetadataFormat::getObjectEnumerations($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	if ($nc(info)->objectValueType == $IIOMetadataFormat::VALUE_NONE) {
		$throwNew($IllegalArgumentException, $$str({"Element cannot contain an object value: "_s, elementName}));
	}
	return $nc(info)->objectEnumerations;
}

$Comparable* TIFFMetadataFormat::getObjectMinValue($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	if ($nc(info)->objectValueType == $IIOMetadataFormat::VALUE_NONE) {
		$throwNew($IllegalArgumentException, $$str({"Element cannot contain an object value: "_s, elementName}));
	}
	return $nc(info)->objectMinValue;
}

$Comparable* TIFFMetadataFormat::getObjectMaxValue($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	if ($nc(info)->objectValueType == $IIOMetadataFormat::VALUE_NONE) {
		$throwNew($IllegalArgumentException, $$str({"Element cannot contain an object value: "_s, elementName}));
	}
	return $nc(info)->objectMaxValue;
}

int32_t TIFFMetadataFormat::getObjectArrayMinLength($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	if ($nc(info)->objectValueType == $IIOMetadataFormat::VALUE_NONE) {
		$throwNew($IllegalArgumentException, $$str({"Element cannot contain an object value: "_s, elementName}));
	}
	return $nc(info)->objectArrayMinLength;
}

int32_t TIFFMetadataFormat::getObjectArrayMaxLength($String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($TIFFElementInfo, info, getElementInfo(elementName));
	if ($nc(info)->objectValueType == $IIOMetadataFormat::VALUE_NONE) {
		$throwNew($IllegalArgumentException, $$str({"Element cannot contain an object value: "_s, elementName}));
	}
	return $nc(info)->objectArrayMaxLength;
}

void TIFFMetadataFormat::init$() {
	$set(this, elementInfoMap, $new($HashMap));
	$set(this, attrInfoMap, $new($HashMap));
}

TIFFMetadataFormat::TIFFMetadataFormat() {
}

$Class* TIFFMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(TIFFMetadataFormat, name, initialize, &_TIFFMetadataFormat_ClassInfo_, allocate$TIFFMetadataFormat);
	return class$;
}

$Class* TIFFMetadataFormat::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com