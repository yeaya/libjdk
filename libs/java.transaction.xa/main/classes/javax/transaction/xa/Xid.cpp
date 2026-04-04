#include <javax/transaction/xa/Xid.h>
#include <jcpp.h>

#undef MAXBQUALSIZE
#undef MAXGTRIDSIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace transaction {
		namespace xa {

$Class* Xid::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MAXGTRIDSIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Xid, MAXGTRIDSIZE)},
		{"MAXBQUALSIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Xid, MAXBQUALSIZE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getBranchQualifier", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Xid, getBranchQualifier, $bytes*)},
		{"getFormatId", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Xid, getFormatId, int32_t)},
		{"getGlobalTransactionId", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Xid, getGlobalTransactionId, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.transaction.xa.Xid",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Xid, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Xid);
	});
	return class$;
}

$Class* Xid::class$ = nullptr;

		} // xa
	} // transaction
} // javax