#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSFacets.h>
#include <jcpp.h>

#undef PRIMITIVE_ANYURI
#undef PRIMITIVE_BASE64BINARY
#undef PRIMITIVE_BOOLEAN
#undef PRIMITIVE_DATE
#undef PRIMITIVE_DATETIME
#undef PRIMITIVE_DECIMAL
#undef PRIMITIVE_DOUBLE
#undef PRIMITIVE_DURATION
#undef PRIMITIVE_FLOAT
#undef PRIMITIVE_GDAY
#undef PRIMITIVE_GMONTH
#undef PRIMITIVE_GMONTHDAY
#undef PRIMITIVE_GYEAR
#undef PRIMITIVE_GYEARMONTH
#undef PRIMITIVE_HEXBINARY
#undef PRIMITIVE_NOTATION
#undef PRIMITIVE_PRECISIONDECIMAL
#undef PRIMITIVE_QNAME
#undef PRIMITIVE_STRING
#undef PRIMITIVE_TIME
#undef WS_COLLAPSE
#undef WS_PRESERVE
#undef WS_REPLACE

using $ValidatedInfo = ::com::sun::org::apache::xerces::internal::impl::dv::ValidatedInfo;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XSFacets = ::com::sun::org::apache::xerces::internal::impl::dv::XSFacets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

$FieldInfo _XSSimpleType_FieldInfo_[] = {
	{"WS_PRESERVE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, WS_PRESERVE)},
	{"WS_REPLACE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, WS_REPLACE)},
	{"WS_COLLAPSE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, WS_COLLAPSE)},
	{"PRIMITIVE_STRING", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_STRING)},
	{"PRIMITIVE_BOOLEAN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_BOOLEAN)},
	{"PRIMITIVE_DECIMAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_DECIMAL)},
	{"PRIMITIVE_FLOAT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_FLOAT)},
	{"PRIMITIVE_DOUBLE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_DOUBLE)},
	{"PRIMITIVE_DURATION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_DURATION)},
	{"PRIMITIVE_DATETIME", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_DATETIME)},
	{"PRIMITIVE_TIME", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_TIME)},
	{"PRIMITIVE_DATE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_DATE)},
	{"PRIMITIVE_GYEARMONTH", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_GYEARMONTH)},
	{"PRIMITIVE_GYEAR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_GYEAR)},
	{"PRIMITIVE_GMONTHDAY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_GMONTHDAY)},
	{"PRIMITIVE_GDAY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_GDAY)},
	{"PRIMITIVE_GMONTH", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_GMONTH)},
	{"PRIMITIVE_HEXBINARY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_HEXBINARY)},
	{"PRIMITIVE_BASE64BINARY", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_BASE64BINARY)},
	{"PRIMITIVE_ANYURI", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_ANYURI)},
	{"PRIMITIVE_QNAME", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_QNAME)},
	{"PRIMITIVE_PRECISIONDECIMAL", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_PRECISIONDECIMAL)},
	{"PRIMITIVE_NOTATION", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XSSimpleType, PRIMITIVE_NOTATION)},
	{}
};

$MethodInfo _XSSimpleType_MethodInfo_[] = {
	{"applyFacets", "(Lcom/sun/org/apache/xerces/internal/impl/dv/XSFacets;SSLcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleType, applyFacets, void, $XSFacets*, int16_t, int16_t, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeFacetException"},
	{"getPrimitiveKind", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleType, getPrimitiveKind, int16_t)},
	{"getWhitespace", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleType, getWhitespace, int16_t), "com.sun.org.apache.xerces.internal.impl.dv.DatatypeException"},
	{"isEqual", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleType, isEqual, bool, Object$*, Object$*)},
	{"isIDType", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleType, isIDType, bool)},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleType, validate, $Object*, $String*, $ValidationContext*, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"validate", "(Ljava/lang/Object;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleType, validate, $Object*, Object$*, $ValidationContext*, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"validate", "(Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidatedInfo;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSSimpleType, validate, void, $ValidationContext*, $ValidatedInfo*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _XSSimpleType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dv.XSSimpleType",
	nullptr,
	"com.sun.org.apache.xerces.internal.xs.XSSimpleTypeDefinition",
	_XSSimpleType_FieldInfo_,
	_XSSimpleType_MethodInfo_
};

$Object* allocate$XSSimpleType($Class* clazz) {
	return $of($alloc(XSSimpleType));
}

$Class* XSSimpleType::load$($String* name, bool initialize) {
	$loadClass(XSSimpleType, name, initialize, &_XSSimpleType_ClassInfo_, allocate$XSSimpleType);
	return class$;
}

$Class* XSSimpleType::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com