#include <jdk/xml/internal/TransformErrorListener.h>

#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace jdk {
	namespace xml {
		namespace internal {

$MethodInfo _TransformErrorListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TransformErrorListener, init$, void)},
	{"error", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC, $virtualMethod(TransformErrorListener, error, void, $TransformerException*), "javax.xml.transform.TransformerException"},
	{"fatalError", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC, $virtualMethod(TransformErrorListener, fatalError, void, $TransformerException*), "javax.xml.transform.TransformerException"},
	{"warning", "(Ljavax/xml/transform/TransformerException;)V", nullptr, $PUBLIC, $virtualMethod(TransformErrorListener, warning, void, $TransformerException*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _TransformErrorListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.xml.internal.TransformErrorListener",
	"java.lang.Object",
	"javax.xml.transform.ErrorListener",
	nullptr,
	_TransformErrorListener_MethodInfo_
};

$Object* allocate$TransformErrorListener($Class* clazz) {
	return $of($alloc(TransformErrorListener));
}

void TransformErrorListener::init$() {
}

void TransformErrorListener::warning($TransformerException* e) {
}

void TransformErrorListener::error($TransformerException* e) {
	$throw(e);
}

void TransformErrorListener::fatalError($TransformerException* e) {
	$throw(e);
}

TransformErrorListener::TransformErrorListener() {
}

$Class* TransformErrorListener::load$($String* name, bool initialize) {
	$loadClass(TransformErrorListener, name, initialize, &_TransformErrorListener_ClassInfo_, allocate$TransformErrorListener);
	return class$;
}

$Class* TransformErrorListener::class$ = nullptr;

		} // internal
	} // xml
} // jdk