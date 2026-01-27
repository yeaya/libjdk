#include <com/sun/org/apache/xerces/internal/xs/datatypes/XSDateTime.h>

#include <javax/xml/datatype/Duration.h>
#include <javax/xml/datatype/XMLGregorianCalendar.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Duration = ::javax::xml::datatype::Duration;
using $XMLGregorianCalendar = ::javax::xml::datatype::XMLGregorianCalendar;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							namespace datatypes {

$MethodInfo _XSDateTime_MethodInfo_[] = {
	{"getDays", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, getDays, int32_t)},
	{"getDuration", "()Ljavax/xml/datatype/Duration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, getDuration, $Duration*)},
	{"getHours", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, getHours, int32_t)},
	{"getLexicalValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, getLexicalValue, $String*)},
	{"getMinutes", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, getMinutes, int32_t)},
	{"getMonths", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, getMonths, int32_t)},
	{"getSeconds", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, getSeconds, double)},
	{"getTimeZoneHours", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, getTimeZoneHours, int32_t)},
	{"getTimeZoneMinutes", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, getTimeZoneMinutes, int32_t)},
	{"getXMLGregorianCalendar", "()Ljavax/xml/datatype/XMLGregorianCalendar;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, getXMLGregorianCalendar, $XMLGregorianCalendar*)},
	{"getYears", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, getYears, int32_t)},
	{"hasTimeZone", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, hasTimeZone, bool)},
	{"isNormalized", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, isNormalized, bool)},
	{"normalize", "()Lcom/sun/org/apache/xerces/internal/xs/datatypes/XSDateTime;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSDateTime, normalize, XSDateTime*)},
	{}
};

$ClassInfo _XSDateTime_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.datatypes.XSDateTime",
	nullptr,
	nullptr,
	nullptr,
	_XSDateTime_MethodInfo_
};

$Object* allocate$XSDateTime($Class* clazz) {
	return $of($alloc(XSDateTime));
}

$Class* XSDateTime::load$($String* name, bool initialize) {
	$loadClass(XSDateTime, name, initialize, &_XSDateTime_ClassInfo_, allocate$XSDateTime);
	return class$;
}

$Class* XSDateTime::class$ = nullptr;

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com