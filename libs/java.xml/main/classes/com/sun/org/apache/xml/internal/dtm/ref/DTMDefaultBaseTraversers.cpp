#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMException.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AllFromNodeTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AllFromRootTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AncestorOrSelfTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AncestorTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$AttributeTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$ChildTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantFromRootTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantOrSelfTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$FollowingSiblingTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$FollowingTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$IndexedDTMAxisTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$NamespaceDeclsTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$NamespaceTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$ParentTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$PrecedingSiblingTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$PrecedingTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$RootTraverser.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$SelfTraverser.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <javax/xml/transform/Source.h>
#include <jcpp.h>

#undef ALL
#undef ALLFROMNODE
#undef ANCESTOR
#undef ANCESTORORSELF
#undef ATTRIBUTE
#undef CHILD
#undef DESCENDANT
#undef DESCENDANTORSELF
#undef DESCENDANTSFROMROOT
#undef DESCENDANTSORSELFFROMROOT
#undef ER_AXIS_TRAVERSER_NOT_SUPPORTED
#undef ER_UNKNOWN_AXIS_TYPE
#undef FILTEREDLIST
#undef FOLLOWING
#undef FOLLOWINGSIBLING
#undef NAMESPACE
#undef NAMESPACEDECLS
#undef PARENT
#undef PRECEDING
#undef PRECEDINGANDANCESTOR
#undef PRECEDINGSIBLING
#undef ROOT
#undef SELF

using $DTMAxisTraverserArray = $Array<::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser>;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser;
using $DTMException = ::com::sun::org::apache::xml::internal::dtm::DTMException;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseTraversers$AllFromNodeTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AllFromNodeTraverser;
using $DTMDefaultBaseTraversers$AllFromRootTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AllFromRootTraverser;
using $DTMDefaultBaseTraversers$AncestorOrSelfTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AncestorOrSelfTraverser;
using $DTMDefaultBaseTraversers$AncestorTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AncestorTraverser;
using $DTMDefaultBaseTraversers$AttributeTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$AttributeTraverser;
using $DTMDefaultBaseTraversers$ChildTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$ChildTraverser;
using $DTMDefaultBaseTraversers$DescendantFromRootTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$DescendantFromRootTraverser;
using $DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser;
using $DTMDefaultBaseTraversers$DescendantOrSelfTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$DescendantOrSelfTraverser;
using $DTMDefaultBaseTraversers$DescendantTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$DescendantTraverser;
using $DTMDefaultBaseTraversers$FollowingSiblingTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$FollowingSiblingTraverser;
using $DTMDefaultBaseTraversers$FollowingTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$FollowingTraverser;
using $DTMDefaultBaseTraversers$IndexedDTMAxisTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$IndexedDTMAxisTraverser;
using $DTMDefaultBaseTraversers$NamespaceDeclsTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$NamespaceDeclsTraverser;
using $DTMDefaultBaseTraversers$NamespaceTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$NamespaceTraverser;
using $DTMDefaultBaseTraversers$ParentTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$ParentTraverser;
using $DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser;
using $DTMDefaultBaseTraversers$PrecedingSiblingTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$PrecedingSiblingTraverser;
using $DTMDefaultBaseTraversers$PrecedingTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$PrecedingTraverser;
using $DTMDefaultBaseTraversers$RootTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$RootTraverser;
using $DTMDefaultBaseTraversers$SelfTraverser = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers$SelfTraverser;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Source = ::javax::xml::transform::Source;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

$MethodInfo _DTMDefaultBaseTraversers_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;Z)V", nullptr, $PUBLIC, $method(DTMDefaultBaseTraversers, init$, void, $DTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;ZIZZ)V", nullptr, $PUBLIC, $method(DTMDefaultBaseTraversers, init$, void, $DTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool, int32_t, bool, bool)},
	{"getAxisTraverser", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisTraverser;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseTraversers, getAxisTraverser, $DTMAxisTraverser*, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseTraversers_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantFromRootTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantFromRootTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantOrSelfFromRootTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$RootTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "RootTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromRootTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AllFromRootTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$SelfTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "SelfTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$PrecedingSiblingTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "PrecedingSiblingTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "PrecedingAndAncestorTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$PrecedingTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "PrecedingTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$ParentTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "ParentTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$NamespaceTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "NamespaceTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$NamespaceDeclsTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "NamespaceDeclsTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$FollowingSiblingTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "FollowingSiblingTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$FollowingTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "FollowingTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromNodeTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AllFromNodeTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantOrSelfTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantOrSelfTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "DescendantTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$IndexedDTMAxisTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "IndexedDTMAxisTraverser", $PRIVATE | $ABSTRACT},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$ChildTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "ChildTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AttributeTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AttributeTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AncestorOrSelfTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AncestorOrSelfTraverser", $PRIVATE},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AncestorTraverser", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers", "AncestorTraverser", $PRIVATE},
	{}
};

$ClassInfo _DTMDefaultBaseTraversers_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBase",
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseTraversers_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantFromRootTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$RootTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromRootTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$SelfTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$PrecedingSiblingTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$PrecedingTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$ParentTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$NamespaceTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$NamespaceDeclsTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$FollowingSiblingTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$FollowingTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AllFromNodeTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantOrSelfTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$DescendantTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$IndexedDTMAxisTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$ChildTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AttributeTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AncestorOrSelfTraverser,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers$AncestorTraverser"
};

$Object* allocate$DTMDefaultBaseTraversers($Class* clazz) {
	return $of($alloc(DTMDefaultBaseTraversers));
}

void DTMDefaultBaseTraversers::init$($DTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing) {
	$DTMDefaultBase::init$(mgr, source, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing);
}

void DTMDefaultBaseTraversers::init$($DTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing, int32_t blocksize, bool usePrevsib, bool newNameTable) {
	$DTMDefaultBase::init$(mgr, source, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing, blocksize, usePrevsib, newNameTable);
}

$DTMAxisTraverser* DTMDefaultBaseTraversers::getAxisTraverser(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	$var($DTMAxisTraverser, traverser, nullptr);
	if (nullptr == this->m_traversers) {
		$set(this, m_traversers, $new($DTMAxisTraverserArray, $Axis::getNamesLength()));
		$assign(traverser, nullptr);
	} else {
		$assign(traverser, $nc(this->m_traversers)->get(axis));
		if (traverser != nullptr) {
			return traverser;
		}
	}
	switch (axis) {
	case $Axis::ANCESTOR:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$AncestorTraverser, this));
			break;
		}
	case $Axis::ANCESTORORSELF:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$AncestorOrSelfTraverser, this));
			break;
		}
	case $Axis::ATTRIBUTE:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$AttributeTraverser, this));
			break;
		}
	case $Axis::CHILD:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$ChildTraverser, this));
			break;
		}
	case $Axis::DESCENDANT:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$DescendantTraverser, this));
			break;
		}
	case $Axis::DESCENDANTORSELF:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$DescendantOrSelfTraverser, this));
			break;
		}
	case $Axis::FOLLOWING:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$FollowingTraverser, this));
			break;
		}
	case $Axis::FOLLOWINGSIBLING:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$FollowingSiblingTraverser, this));
			break;
		}
	case $Axis::NAMESPACE:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$NamespaceTraverser, this));
			break;
		}
	case $Axis::NAMESPACEDECLS:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$NamespaceDeclsTraverser, this));
			break;
		}
	case $Axis::PARENT:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$ParentTraverser, this));
			break;
		}
	case $Axis::PRECEDING:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$PrecedingTraverser, this));
			break;
		}
	case $Axis::PRECEDINGSIBLING:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$PrecedingSiblingTraverser, this));
			break;
		}
	case $Axis::SELF:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$SelfTraverser, this));
			break;
		}
	case $Axis::ALL:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$AllFromRootTraverser, this));
			break;
		}
	case $Axis::ALLFROMNODE:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$AllFromNodeTraverser, this));
			break;
		}
	case $Axis::PRECEDINGANDANCESTOR:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$PrecedingAndAncestorTraverser, this));
			break;
		}
	case $Axis::DESCENDANTSFROMROOT:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$DescendantFromRootTraverser, this));
			break;
		}
	case $Axis::DESCENDANTSORSELFFROMROOT:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$DescendantOrSelfFromRootTraverser, this));
			break;
		}
	case $Axis::ROOT:
		{
			$assign(traverser, $new($DTMDefaultBaseTraversers$RootTraverser, this));
			break;
		}
	case $Axis::FILTEREDLIST:
		{
			return nullptr;
		}
	default:
		{
			$init($XMLErrorResources);
			$throwNew($DTMException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_UNKNOWN_AXIS_TYPE, $$new($ObjectArray, {$($of($Integer::toString(axis)))}))));
		}
	}
	if (nullptr == traverser) {
		$init($XMLErrorResources);
		$throwNew($DTMException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_AXIS_TRAVERSER_NOT_SUPPORTED, $$new($ObjectArray, {$($of($Axis::getNames(axis)))}))));
	}
	$nc(this->m_traversers)->set(axis, traverser);
	return traverser;
}

DTMDefaultBaseTraversers::DTMDefaultBaseTraversers() {
}

$Class* DTMDefaultBaseTraversers::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseTraversers, name, initialize, &_DTMDefaultBaseTraversers_ClassInfo_, allocate$DTMDefaultBaseTraversers);
	return class$;
}

$Class* DTMDefaultBaseTraversers::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com