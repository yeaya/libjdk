#include <java/sql/ParameterMetaData.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$FieldInfo _ParameterMetaData_FieldInfo_[] = {
	{"parameterNoNulls", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterNoNulls)},
	{"parameterNullable", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterNullable)},
	{"parameterNullableUnknown", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterNullableUnknown)},
	{"parameterModeUnknown", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterModeUnknown)},
	{"parameterModeIn", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterModeIn)},
	{"parameterModeInOut", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterModeInOut)},
	{"parameterModeOut", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ParameterMetaData, parameterModeOut)},
	{}
};

$MethodInfo _ParameterMetaData_MethodInfo_[] = {
	{"getParameterClassName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterMetaData, getParameterClassName, $String*, int32_t), "java.sql.SQLException"},
	{"getParameterCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterMetaData, getParameterCount, int32_t), "java.sql.SQLException"},
	{"getParameterMode", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterMetaData, getParameterMode, int32_t, int32_t), "java.sql.SQLException"},
	{"getParameterType", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterMetaData, getParameterType, int32_t, int32_t), "java.sql.SQLException"},
	{"getParameterTypeName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterMetaData, getParameterTypeName, $String*, int32_t), "java.sql.SQLException"},
	{"getPrecision", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterMetaData, getPrecision, int32_t, int32_t), "java.sql.SQLException"},
	{"getScale", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterMetaData, getScale, int32_t, int32_t), "java.sql.SQLException"},
	{"isNullable", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterMetaData, isNullable, int32_t, int32_t), "java.sql.SQLException"},
	{"isSigned", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterMetaData, isSigned, bool, int32_t), "java.sql.SQLException"},
	{}
};

$ClassInfo _ParameterMetaData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.ParameterMetaData",
	nullptr,
	"java.sql.Wrapper",
	_ParameterMetaData_FieldInfo_,
	_ParameterMetaData_MethodInfo_
};

$Object* allocate$ParameterMetaData($Class* clazz) {
	return $of($alloc(ParameterMetaData));
}

$Class* ParameterMetaData::load$($String* name, bool initialize) {
	$loadClass(ParameterMetaData, name, initialize, &_ParameterMetaData_ClassInfo_, allocate$ParameterMetaData);
	return class$;
}

$Class* ParameterMetaData::class$ = nullptr;

	} // sql
} // java