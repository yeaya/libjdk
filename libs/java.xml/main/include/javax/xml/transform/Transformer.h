#ifndef _javax_xml_transform_Transformer_h_
#define _javax_xml_transform_Transformer_h_
//$ class javax.xml.transform.Transformer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Properties;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
			class Result;
			class Source;
			class URIResolver;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {

class $import Transformer : public ::java::lang::Object {
	$class(Transformer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Transformer();
	void init$();
	virtual void clearParameters() {}
	virtual ::javax::xml::transform::ErrorListener* getErrorListener() {return nullptr;}
	virtual ::java::util::Properties* getOutputProperties() {return nullptr;}
	virtual $String* getOutputProperty($String* name) {return nullptr;}
	virtual $Object* getParameter($String* name) {return nullptr;}
	virtual ::javax::xml::transform::URIResolver* getURIResolver() {return nullptr;}
	virtual void reset();
	virtual void setErrorListener(::javax::xml::transform::ErrorListener* listener) {}
	virtual void setOutputProperties(::java::util::Properties* oformat) {}
	virtual void setOutputProperty($String* name, $String* value) {}
	virtual void setParameter($String* name, Object$* value) {}
	virtual void setURIResolver(::javax::xml::transform::URIResolver* resolver) {}
	virtual void transform(::javax::xml::transform::Source* xmlSource, ::javax::xml::transform::Result* outputTarget) {}
};

		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_Transformer_h_