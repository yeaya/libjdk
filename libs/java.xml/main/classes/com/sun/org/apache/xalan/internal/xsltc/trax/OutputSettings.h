#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_OutputSettings_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_OutputSettings_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.OutputSettings
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Properties;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

class OutputSettings : public ::java::lang::Object {
	$class(OutputSettings, $NO_CLASS_INIT, ::java::lang::Object)
public:
	OutputSettings();
	void init$();
	::java::util::Properties* getProperties();
	$String* _cdata_section_elements = nullptr;
	$String* _doctype_public = nullptr;
	$String* _encoding = nullptr;
	$String* _indent = nullptr;
	$String* _media_type = nullptr;
	$String* _method = nullptr;
	$String* _omit_xml_declaration = nullptr;
	$String* _standalone = nullptr;
	$String* _version = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_OutputSettings_h_