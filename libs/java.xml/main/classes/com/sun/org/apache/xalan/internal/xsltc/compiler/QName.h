#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_QName_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_QName_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.QName
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class QName : public ::java::lang::Object {
	$class(QName, $NO_CLASS_INIT, ::java::lang::Object)
public:
	QName();
	void init$($String* namespace$, $String* prefix, $String* localname);
	void clearNamespace();
	$String* dump();
	virtual bool equals(Object$* other) override;
	$String* getLocalPart();
	$String* getNamespace();
	$String* getPrefix();
	$String* getStringRep();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* _localname = nullptr;
	$String* _prefix = nullptr;
	$String* _namespace = nullptr;
	$String* _stringRep = nullptr;
	int32_t _hashCode = 0;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_QName_h_