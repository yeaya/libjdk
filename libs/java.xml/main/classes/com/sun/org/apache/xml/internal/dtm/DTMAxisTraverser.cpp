#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

$MethodInfo _DTMAxisTraverser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DTMAxisTraverser, init$, void)},
	{"first", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMAxisTraverser, first, int32_t, int32_t)},
	{"first", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMAxisTraverser, first, int32_t, int32_t, int32_t)},
	{"next", "(II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTMAxisTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$ClassInfo _DTMAxisTraverser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DTMAxisTraverser_MethodInfo_
};

$Object* allocate$DTMAxisTraverser($Class* clazz) {
	return $of($alloc(DTMAxisTraverser));
}

void DTMAxisTraverser::init$() {
}

int32_t DTMAxisTraverser::first(int32_t context) {
	return next(context, context);
}

int32_t DTMAxisTraverser::first(int32_t context, int32_t extendedTypeID) {
	return next(context, context, extendedTypeID);
}

DTMAxisTraverser::DTMAxisTraverser() {
}

$Class* DTMAxisTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMAxisTraverser, name, initialize, &_DTMAxisTraverser_ClassInfo_, allocate$DTMAxisTraverser);
	return class$;
}

$Class* DTMAxisTraverser::class$ = nullptr;

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com