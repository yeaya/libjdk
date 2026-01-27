#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$FollowingTraverser.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef NAMESPACE_NODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $DTMDefaultBaseTraversers$DescendantTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$DescendantTraverser;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$FieldInfo _DTMDefaultBaseTraversers$FollowingTraverser_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;", nullptr, $FINAL | $SYNTHETIC, $field(DTMDefaultBaseTraversers$FollowingTraverser, this$0)},
	{}
};

$MethodInfo _DTMDefaultBaseTraversers$FollowingTraverser_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers;)V", nullptr, $PRIVATE, $method(DTMDefaultBaseTraversers$FollowingTraverser, init$, void, $DTMDefaultBaseTraversers*)},
	{"first", "(I)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$FollowingTraverser, first, int32_t, int32_t)},
	{"first", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$FollowingTraverser, first, int32_t, int32_t, int32_t)},
	{"next", "(II)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$FollowingTraverser, next, int32_t, int32_t, int32_t)},
	{"next", "(III)I", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers$FollowingTraverser, next, int32_t, int32_t, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers$FollowingTraverser_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$FollowingTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "FollowingTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers$FollowingTraverser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$FollowingTraverser",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser",
	nullptr,
	_DTMDefaultBaseTraversers$FollowingTraverser_FieldInfo_,
	_DTMDefaultBaseTraversers$FollowingTraverser_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers$FollowingTraverser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers"
};

$Object* allocate$DTMDefaultBaseTraversers$FollowingTraverser($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers$FollowingTraverser));
}

void DTMDefaultBaseTraversers$FollowingTraverser::init$($DTMDefaultBaseTraversers* this$0) {
	$set(this, this$0, this$0);
	$DTMDefaultBaseTraversers$DescendantTraverser::init$(this$0);
}

int32_t DTMDefaultBaseTraversers$FollowingTraverser::first(int32_t context) {
	context = this->this$0->makeNodeIdentity(context);
	int32_t first = 0;
	int32_t type = this->this$0->_type(context);
	if (($DTM::ATTRIBUTE_NODE == type) || ($DTM::NAMESPACE_NODE == type)) {
		context = this->this$0->_parent(context);
		first = this->this$0->_firstch(context);
		if (-1 != first) {
			return this->this$0->makeNodeHandle(first);
		}
	}
	do {
		first = this->this$0->_nextsib(context);
		if (-1 == first) {
			context = this->this$0->_parent(context);
		}
	} while (-1 == first && -1 != context);
	return this->this$0->makeNodeHandle(first);
}

int32_t DTMDefaultBaseTraversers$FollowingTraverser::first(int32_t context, int32_t expandedTypeID) {
	int32_t first = 0;
	int32_t type = this->this$0->getNodeType(context);
	if (($DTM::ATTRIBUTE_NODE == type) || ($DTM::NAMESPACE_NODE == type)) {
		context = this->this$0->getParent(context);
		first = this->this$0->getFirstChild(context);
		if (-1 != first) {
			if (this->this$0->getExpandedTypeID(first) == expandedTypeID) {
				return first;
			} else {
				return next(context, first, expandedTypeID);
			}
		}
	}
	do {
		first = this->this$0->getNextSibling(context);
		if (-1 == first) {
			context = this->this$0->getParent(context);
		} else if (this->this$0->getExpandedTypeID(first) == expandedTypeID) {
			return first;
		} else {
			return next(context, first, expandedTypeID);
		}
	} while (-1 == first && -1 != context);
	return first;
}

int32_t DTMDefaultBaseTraversers$FollowingTraverser::next(int32_t context, int32_t current) {
	current = this->this$0->makeNodeIdentity(current);
	while (true) {
		++current;
		int32_t type = this->this$0->_type(current);
		if (-1 == type) {
			return -1;
		}
		if ((int16_t)2 == type || (int16_t)13 == type) {
			continue;
		}
		return this->this$0->makeNodeHandle(current);
	}
}

int32_t DTMDefaultBaseTraversers$FollowingTraverser::next(int32_t context, int32_t current, int32_t expandedTypeID) {
	current = this->this$0->makeNodeIdentity(current);
	while (true) {
		++current;
		int32_t etype = this->this$0->_exptype(current);
		if (-1 == etype) {
			return -1;
		}
		if (etype != expandedTypeID) {
			continue;
		}
		return this->this$0->makeNodeHandle(current);
	}
}

DTMDefaultBaseTraversers$FollowingTraverser::DTMDefaultBaseTraversers$FollowingTraverser() {
}

$Class* DTMDefaultBaseTraversers$FollowingTraverser::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers$FollowingTraverser, name, initialize, &_DTMDefaultBaseTraversers$FollowingTraverser_ClassInfo_, allocate$DTMDefaultBaseTraversers$FollowingTraverser);
	return class$;
}

$Class* DTMDefaultBaseTraversers$FollowingTraverser::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com