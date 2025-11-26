#ifndef _jdk_internal_shellsupport_doc_resources_javadocformatter_h_
#define _jdk_internal_shellsupport_doc_resources_javadocformatter_h_
//$ class jdk.internal.shellsupport.doc.resources.javadocformatter
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace jdk {
	namespace internal {
		namespace shellsupport {
			namespace doc {
				namespace resources {

class javadocformatter : public ::java::util::ListResourceBundle {
	$class(javadocformatter, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	javadocformatter();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // resources
			} // doc
		} // shellsupport
	} // internal
} // jdk

#endif // _jdk_internal_shellsupport_doc_resources_javadocformatter_h_