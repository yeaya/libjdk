#ifndef _javax_xml_transform_TransformerFactory_h_
#define _javax_xml_transform_TransformerFactory_h_
//$ class javax.xml.transform.TransformerFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
			class Source;
			class Templates;
			class Transformer;
			class URIResolver;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {

class $export TransformerFactory : public ::java::lang::Object {
	$class(TransformerFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TransformerFactory();
	void init$();
	virtual ::javax::xml::transform::Source* getAssociatedStylesheet(::javax::xml::transform::Source* source, $String* media, $String* title, $String* charset) {return nullptr;}
	virtual $Object* getAttribute($String* name) {return nullptr;}
	virtual ::javax::xml::transform::ErrorListener* getErrorListener() {return nullptr;}
	virtual bool getFeature($String* name) {return false;}
	virtual ::javax::xml::transform::URIResolver* getURIResolver() {return nullptr;}
	static ::javax::xml::transform::TransformerFactory* newDefaultInstance();
	static ::javax::xml::transform::TransformerFactory* newInstance();
	static ::javax::xml::transform::TransformerFactory* newInstance($String* factoryClassName, ::java::lang::ClassLoader* classLoader);
	virtual ::javax::xml::transform::Templates* newTemplates(::javax::xml::transform::Source* source) {return nullptr;}
	virtual ::javax::xml::transform::Transformer* newTransformer(::javax::xml::transform::Source* source) {return nullptr;}
	virtual ::javax::xml::transform::Transformer* newTransformer() {return nullptr;}
	virtual void setAttribute($String* name, Object$* value) {}
	virtual void setErrorListener(::javax::xml::transform::ErrorListener* listener) {}
	virtual void setFeature($String* name, bool value) {}
	virtual void setURIResolver(::javax::xml::transform::URIResolver* resolver) {}
};

		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_TransformerFactory_h_