#ifndef _javax_xml_catalog_CatalogException_h_
#define _javax_xml_catalog_CatalogException_h_
//$ class javax.xml.catalog.CatalogException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class $import CatalogException : public ::java::lang::RuntimeException {
	$class(CatalogException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	CatalogException();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0x0910BE9C9FF3E631;
	CatalogException(const CatalogException& e);
	virtual void throw$() override;
	inline CatalogException* operator ->() {
		return (CatalogException*)throwing$;
	}
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_CatalogException_h_