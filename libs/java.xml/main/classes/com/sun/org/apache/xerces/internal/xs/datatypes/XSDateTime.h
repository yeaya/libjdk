#ifndef _com_sun_org_apache_xerces_internal_xs_datatypes_XSDateTime_h_
#define _com_sun_org_apache_xerces_internal_xs_datatypes_XSDateTime_h_
//$ interface com.sun.org.apache.xerces.internal.xs.datatypes.XSDateTime
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace datatype {
			class Duration;
			class XMLGregorianCalendar;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							namespace datatypes {

class XSDateTime : public ::java::lang::Object {
	$interface(XSDateTime, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getDays() {return 0;}
	virtual ::javax::xml::datatype::Duration* getDuration() {return nullptr;}
	virtual int32_t getHours() {return 0;}
	virtual $String* getLexicalValue() {return nullptr;}
	virtual int32_t getMinutes() {return 0;}
	virtual int32_t getMonths() {return 0;}
	virtual double getSeconds() {return 0.0;}
	virtual int32_t getTimeZoneHours() {return 0;}
	virtual int32_t getTimeZoneMinutes() {return 0;}
	virtual ::javax::xml::datatype::XMLGregorianCalendar* getXMLGregorianCalendar() {return nullptr;}
	virtual int32_t getYears() {return 0;}
	virtual bool hasTimeZone() {return false;}
	virtual bool isNormalized() {return false;}
	virtual ::com::sun::org::apache::xerces::internal::xs::datatypes::XSDateTime* normalize() {return nullptr;}
};

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_datatypes_XSDateTime_h_