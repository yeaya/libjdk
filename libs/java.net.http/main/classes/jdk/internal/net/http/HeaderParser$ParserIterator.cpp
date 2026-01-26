#include <jdk/internal/net/http/HeaderParser$ParserIterator.h>

#include <java/util/NoSuchElementException.h>
#include <jdk/internal/net/http/HeaderParser.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $HeaderParser = ::jdk::internal::net::http::HeaderParser;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$FieldInfo _HeaderParser$ParserIterator_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/net/http/HeaderParser;", nullptr, $FINAL | $SYNTHETIC, $field(HeaderParser$ParserIterator, this$0)},
	{"index", "I", nullptr, 0, $field(HeaderParser$ParserIterator, index)},
	{"returnsValue", "Z", nullptr, 0, $field(HeaderParser$ParserIterator, returnsValue)},
	{}
};

$MethodInfo _HeaderParser$ParserIterator_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/net/http/HeaderParser;Z)V", nullptr, 0, $method(HeaderParser$ParserIterator, init$, void, $HeaderParser*, bool)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(HeaderParser$ParserIterator, hasNext, bool)},
	{"next", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HeaderParser$ParserIterator, next, $Object*)},
	{}
};

$InnerClassInfo _HeaderParser$ParserIterator_InnerClassesInfo_[] = {
	{"jdk.internal.net.http.HeaderParser$ParserIterator", "jdk.internal.net.http.HeaderParser", "ParserIterator", 0},
	{}
};

$ClassInfo _HeaderParser$ParserIterator_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.net.http.HeaderParser$ParserIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_HeaderParser$ParserIterator_FieldInfo_,
	_HeaderParser$ParserIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/lang/String;>;",
	nullptr,
	_HeaderParser$ParserIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.net.http.HeaderParser"
};

$Object* allocate$HeaderParser$ParserIterator($Class* clazz) {
	return $of($alloc(HeaderParser$ParserIterator));
}

void HeaderParser$ParserIterator::init$($HeaderParser* this$0, bool returnValue) {
	$set(this, this$0, this$0);
	this->returnsValue = returnValue;
}

bool HeaderParser$ParserIterator::hasNext() {
	return this->index < this->this$0->nkeys;
}

$Object* HeaderParser$ParserIterator::next() {
	if (this->index >= this->this$0->nkeys) {
		$throwNew($NoSuchElementException);
	}
	return $of($nc($nc(this->this$0->tab)->get(this->index++))->get(this->returnsValue ? 1 : 0));
}

HeaderParser$ParserIterator::HeaderParser$ParserIterator() {
}

$Class* HeaderParser$ParserIterator::load$($String* name, bool initialize) {
	$loadClass(HeaderParser$ParserIterator, name, initialize, &_HeaderParser$ParserIterator_ClassInfo_, allocate$HeaderParser$ParserIterator);
	return class$;
}

$Class* HeaderParser$ParserIterator::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk