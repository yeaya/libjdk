#ifndef _javax_annotation_processing_SupportedSourceVersion_h_
#define _javax_annotation_processing_SupportedSourceVersion_h_
//$ interface javax.annotation.processing.SupportedSourceVersion
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace javax {
	namespace lang {
		namespace model {
			class SourceVersion;
		}
	}
}

namespace javax {
	namespace annotation {
		namespace processing {

class $export SupportedSourceVersion : public ::java::lang::annotation::Annotation {
	$interface(SupportedSourceVersion, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual ::javax::lang::model::SourceVersion* value() {return nullptr;}
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_SupportedSourceVersion_h_