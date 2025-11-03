#ifndef _javax_annotation_processing_ProcessingEnvironment_h_
#define _javax_annotation_processing_ProcessingEnvironment_h_
//$ interface javax.annotation.processing.ProcessingEnvironment
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}
namespace javax {
	namespace annotation {
		namespace processing {
			class Filer;
			class Messager;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			class SourceVersion;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace util {
				class Elements;
				class Types;
			}
		}
	}
}

namespace javax {
	namespace annotation {
		namespace processing {

class $import ProcessingEnvironment : public ::java::lang::Object {
	$interface(ProcessingEnvironment, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::lang::model::util::Elements* getElementUtils() {return nullptr;}
	virtual ::javax::annotation::processing::Filer* getFiler() {return nullptr;}
	virtual ::java::util::Locale* getLocale() {return nullptr;}
	virtual ::javax::annotation::processing::Messager* getMessager() {return nullptr;}
	virtual ::java::util::Map* getOptions() {return nullptr;}
	virtual ::javax::lang::model::SourceVersion* getSourceVersion() {return nullptr;}
	virtual ::javax::lang::model::util::Types* getTypeUtils() {return nullptr;}
	virtual bool isPreviewEnabled();
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_ProcessingEnvironment_h_