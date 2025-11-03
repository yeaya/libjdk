#ifndef _javax_annotation_processing_Filer_h_
#define _javax_annotation_processing_Filer_h_
//$ interface javax.annotation.processing.Filer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class FileObject;
		class JavaFileManager$Location;
		class JavaFileObject;
	}
}

namespace javax {
	namespace annotation {
		namespace processing {

class $export Filer : public ::java::lang::Object {
	$interface(Filer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::tools::JavaFileObject* createClassFile(::java::lang::CharSequence* name, $Array<::javax::lang::model::element::Element>* originatingElements) {return nullptr;}
	virtual ::javax::tools::FileObject* createResource(::javax::tools::JavaFileManager$Location* location, ::java::lang::CharSequence* moduleAndPkg, ::java::lang::CharSequence* relativeName, $Array<::javax::lang::model::element::Element>* originatingElements) {return nullptr;}
	virtual ::javax::tools::JavaFileObject* createSourceFile(::java::lang::CharSequence* name, $Array<::javax::lang::model::element::Element>* originatingElements) {return nullptr;}
	virtual ::javax::tools::FileObject* getResource(::javax::tools::JavaFileManager$Location* location, ::java::lang::CharSequence* moduleAndPkg, ::java::lang::CharSequence* relativeName) {return nullptr;}
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_Filer_h_