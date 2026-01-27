#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/ListDatatypeValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

using $DatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator;
using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace dtd {

$FieldInfo _ListDatatypeValidator_FieldInfo_[] = {
	{"fItemValidator", "Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, 0, $field(ListDatatypeValidator, fItemValidator)},
	{}
};

$MethodInfo _ListDatatypeValidator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;)V", nullptr, $PUBLIC, $method(ListDatatypeValidator, init$, void, $DatatypeValidator*)},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(ListDatatypeValidator, validate, void, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _ListDatatypeValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.ListDatatypeValidator",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.DatatypeValidator",
	_ListDatatypeValidator_FieldInfo_,
	_ListDatatypeValidator_MethodInfo_
};

$Object* allocate$ListDatatypeValidator($Class* clazz) {
	return $of($alloc(ListDatatypeValidator));
}

void ListDatatypeValidator::init$($DatatypeValidator* itemDV) {
	$set(this, fItemValidator, itemDV);
}

void ListDatatypeValidator::validate($String* content, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($StringTokenizer, parsedList, $new($StringTokenizer, content, " "_s));
	int32_t numberOfTokens = parsedList->countTokens();
	if (numberOfTokens == 0) {
		$throwNew($InvalidDatatypeValueException, "EmptyList"_s, nullptr);
	}
	while (parsedList->hasMoreTokens()) {
		$nc(this->fItemValidator)->validate($(parsedList->nextToken()), context);
	}
}

ListDatatypeValidator::ListDatatypeValidator() {
}

$Class* ListDatatypeValidator::load$($String* name, bool initialize) {
	$loadClass(ListDatatypeValidator, name, initialize, &_ListDatatypeValidator_ClassInfo_, allocate$ListDatatypeValidator);
	return class$;
}

$Class* ListDatatypeValidator::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com