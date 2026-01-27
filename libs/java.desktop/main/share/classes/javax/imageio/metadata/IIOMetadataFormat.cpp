#include <javax/imageio/metadata/IIOMetadataFormat.h>

#include <java/lang/Comparable.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <jcpp.h>

#undef CHILD_POLICY_ALL
#undef CHILD_POLICY_CHOICE
#undef CHILD_POLICY_EMPTY
#undef CHILD_POLICY_MAX
#undef CHILD_POLICY_REPEAT
#undef CHILD_POLICY_SEQUENCE
#undef CHILD_POLICY_SOME
#undef DATATYPE_BOOLEAN
#undef DATATYPE_DOUBLE
#undef DATATYPE_FLOAT
#undef DATATYPE_INTEGER
#undef DATATYPE_STRING
#undef VALUE_ARBITRARY
#undef VALUE_ENUMERATION
#undef VALUE_LIST
#undef VALUE_NONE
#undef VALUE_RANGE
#undef VALUE_RANGE_MAX_INCLUSIVE
#undef VALUE_RANGE_MAX_INCLUSIVE_MASK
#undef VALUE_RANGE_MIN_INCLUSIVE
#undef VALUE_RANGE_MIN_INCLUSIVE_MASK
#undef VALUE_RANGE_MIN_MAX_INCLUSIVE

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;

namespace javax {
	namespace imageio {
		namespace metadata {

$FieldInfo _IIOMetadataFormat_FieldInfo_[] = {
	{"CHILD_POLICY_EMPTY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_EMPTY)},
	{"CHILD_POLICY_ALL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_ALL)},
	{"CHILD_POLICY_SOME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_SOME)},
	{"CHILD_POLICY_CHOICE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_CHOICE)},
	{"CHILD_POLICY_SEQUENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_SEQUENCE)},
	{"CHILD_POLICY_REPEAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_REPEAT)},
	{"CHILD_POLICY_MAX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, CHILD_POLICY_MAX)},
	{"VALUE_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_NONE)},
	{"VALUE_ARBITRARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_ARBITRARY)},
	{"VALUE_RANGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_RANGE)},
	{"VALUE_RANGE_MIN_INCLUSIVE_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_RANGE_MIN_INCLUSIVE_MASK)},
	{"VALUE_RANGE_MAX_INCLUSIVE_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_RANGE_MAX_INCLUSIVE_MASK)},
	{"VALUE_RANGE_MIN_INCLUSIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_RANGE_MIN_INCLUSIVE)},
	{"VALUE_RANGE_MAX_INCLUSIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_RANGE_MAX_INCLUSIVE)},
	{"VALUE_RANGE_MIN_MAX_INCLUSIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_RANGE_MIN_MAX_INCLUSIVE)},
	{"VALUE_ENUMERATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_ENUMERATION)},
	{"VALUE_LIST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, VALUE_LIST)},
	{"DATATYPE_STRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, DATATYPE_STRING)},
	{"DATATYPE_BOOLEAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, DATATYPE_BOOLEAN)},
	{"DATATYPE_INTEGER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, DATATYPE_INTEGER)},
	{"DATATYPE_FLOAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, DATATYPE_FLOAT)},
	{"DATATYPE_DOUBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(IIOMetadataFormat, DATATYPE_DOUBLE)},
	{}
};

$MethodInfo _IIOMetadataFormat_MethodInfo_[] = {
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, canNodeAppear, bool, $String*, $ImageTypeSpecifier*)},
	{"getAttributeDataType", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getAttributeDataType, int32_t, $String*, $String*)},
	{"getAttributeDefaultValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getAttributeDefaultValue, $String*, $String*, $String*)},
	{"getAttributeDescription", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getAttributeDescription, $String*, $String*, $String*, $Locale*)},
	{"getAttributeEnumerations", "(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getAttributeEnumerations, $StringArray*, $String*, $String*)},
	{"getAttributeListMaxLength", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getAttributeListMaxLength, int32_t, $String*, $String*)},
	{"getAttributeListMinLength", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getAttributeListMinLength, int32_t, $String*, $String*)},
	{"getAttributeMaxValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getAttributeMaxValue, $String*, $String*, $String*)},
	{"getAttributeMinValue", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getAttributeMinValue, $String*, $String*, $String*)},
	{"getAttributeNames", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getAttributeNames, $StringArray*, $String*)},
	{"getAttributeValueType", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getAttributeValueType, int32_t, $String*, $String*)},
	{"getChildNames", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getChildNames, $StringArray*, $String*)},
	{"getChildPolicy", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getChildPolicy, int32_t, $String*)},
	{"getElementDescription", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getElementDescription, $String*, $String*, $Locale*)},
	{"getElementMaxChildren", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getElementMaxChildren, int32_t, $String*)},
	{"getElementMinChildren", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getElementMinChildren, int32_t, $String*)},
	{"getObjectArrayMaxLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getObjectArrayMaxLength, int32_t, $String*)},
	{"getObjectArrayMinLength", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getObjectArrayMinLength, int32_t, $String*)},
	{"getObjectClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getObjectClass, $Class*, $String*)},
	{"getObjectDefaultValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getObjectDefaultValue, $Object*, $String*)},
	{"getObjectEnumerations", "(Ljava/lang/String;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getObjectEnumerations, $ObjectArray*, $String*)},
	{"getObjectMaxValue", "(Ljava/lang/String;)Ljava/lang/Comparable;", "(Ljava/lang/String;)Ljava/lang/Comparable<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getObjectMaxValue, $Comparable*, $String*)},
	{"getObjectMinValue", "(Ljava/lang/String;)Ljava/lang/Comparable;", "(Ljava/lang/String;)Ljava/lang/Comparable<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getObjectMinValue, $Comparable*, $String*)},
	{"getObjectValueType", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getObjectValueType, int32_t, $String*)},
	{"getRootName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, getRootName, $String*)},
	{"isAttributeRequired", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(IIOMetadataFormat, isAttributeRequired, bool, $String*, $String*)},
	{}
};

$ClassInfo _IIOMetadataFormat_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.metadata.IIOMetadataFormat",
	nullptr,
	nullptr,
	_IIOMetadataFormat_FieldInfo_,
	_IIOMetadataFormat_MethodInfo_
};

$Object* allocate$IIOMetadataFormat($Class* clazz) {
	return $of($alloc(IIOMetadataFormat));
}

$Class* IIOMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(IIOMetadataFormat, name, initialize, &_IIOMetadataFormat_ClassInfo_, allocate$IIOMetadataFormat);
	return class$;
}

$Class* IIOMetadataFormat::class$ = nullptr;

		} // metadata
	} // imageio
} // javax