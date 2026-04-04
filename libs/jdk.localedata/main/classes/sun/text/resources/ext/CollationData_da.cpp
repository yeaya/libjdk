#include <sun/text/resources/ext/CollationData_da.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

void CollationData_da::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* CollationData_da::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"Rule"_s,
		u"& A;Á;À;Â,a;á;à;â<B,b<C;Ç,c;ç<D;Ð;Đ,d;ð;đ<E;É;È;Ê;Ë,e;é;è;ê;ë<F,f <G,g <H,h<I;Í,i;í<J,j <K,k <L,l <M,m <N,n<O;Ó;Ô,o;ó;ô<P,p <Q,q <R,r <S,s <T,t<U,u <V,v <W,w <X,x<Y;Ý;Ü,y;ý;ü<Z,z<Æ,æ;Ǽ,ǽ;Ä,ä <Ø,ø ;Ǿ,ǿ;Ö,ö ;Ő,ő< Å , å;Ǻ,ǻ, AA , Aa , aA , aa & ss;ß& th, þ & th, Þ & oe, œ & oe, Œ "_s
	})});
}

CollationData_da::CollationData_da() {
}

$Class* CollationData_da::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CollationData_da, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CollationData_da, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.CollationData_da",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CollationData_da, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CollationData_da);
	});
	return class$;
}

$Class* CollationData_da::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun