#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>

#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMException.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$AncestorIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$AttributeIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$ChildrenIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$DescendantIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$FollowingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$FollowingSiblingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$NamespaceIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$ParentIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$PrecedingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$PrecedingSiblingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$RootIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$SingletonIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedAncestorIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedAttributeIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedChildrenIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedDescendantIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedFollowingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedFollowingSiblingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedNamespaceIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedPrecedingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedPrecedingSiblingIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedRootIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedSingletonIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/res/XMLErrorResources.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <javax/xml/transform/Source.h>
#include <jcpp.h>

#undef ANCESTOR
#undef ANCESTORORSELF
#undef ATTRIBUTE
#undef CHILD
#undef DESCENDANT
#undef DESCENDANTORSELF
#undef ER_ITERATOR_AXIS_NOT_IMPLEMENTED
#undef ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED
#undef FOLLOWING
#undef FOLLOWINGSIBLING
#undef NAMESPACE
#undef PARENT
#undef PRECEDING
#undef PRECEDINGSIBLING
#undef ROOT
#undef SELF

using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTMAxisIterator = ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator;
using $DTMException = ::com::sun::org::apache::xml::internal::dtm::DTMException;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase;
using $DTMDefaultBaseIterators$AncestorIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$AncestorIterator;
using $DTMDefaultBaseIterators$AttributeIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$AttributeIterator;
using $DTMDefaultBaseIterators$ChildrenIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$ChildrenIterator;
using $DTMDefaultBaseIterators$DescendantIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$DescendantIterator;
using $DTMDefaultBaseIterators$FollowingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$FollowingIterator;
using $DTMDefaultBaseIterators$FollowingSiblingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$FollowingSiblingIterator;
using $DTMDefaultBaseIterators$InternalAxisIteratorBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase;
using $DTMDefaultBaseIterators$NamespaceIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$NamespaceIterator;
using $DTMDefaultBaseIterators$ParentIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$ParentIterator;
using $DTMDefaultBaseIterators$PrecedingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$PrecedingIterator;
using $DTMDefaultBaseIterators$PrecedingSiblingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$PrecedingSiblingIterator;
using $DTMDefaultBaseIterators$RootIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$RootIterator;
using $DTMDefaultBaseIterators$SingletonIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$SingletonIterator;
using $DTMDefaultBaseIterators$TypedAncestorIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$TypedAncestorIterator;
using $DTMDefaultBaseIterators$TypedAttributeIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$TypedAttributeIterator;
using $DTMDefaultBaseIterators$TypedChildrenIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$TypedChildrenIterator;
using $DTMDefaultBaseIterators$TypedDescendantIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$TypedDescendantIterator;
using $DTMDefaultBaseIterators$TypedFollowingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$TypedFollowingIterator;
using $DTMDefaultBaseIterators$TypedFollowingSiblingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$TypedFollowingSiblingIterator;
using $DTMDefaultBaseIterators$TypedNamespaceIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$TypedNamespaceIterator;
using $DTMDefaultBaseIterators$TypedPrecedingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$TypedPrecedingIterator;
using $DTMDefaultBaseIterators$TypedPrecedingSiblingIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$TypedPrecedingSiblingIterator;
using $DTMDefaultBaseIterators$TypedRootIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$TypedRootIterator;
using $DTMDefaultBaseIterators$TypedSingletonIterator = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$TypedSingletonIterator;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $XMLErrorResources = ::com::sun::org::apache::xml::internal::res::XMLErrorResources;
using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $XMLStringFactory = ::com::sun::org::apache::xml::internal::utils::XMLStringFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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

$MethodInfo _DTMDefaultBaseIterators_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;Z)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators, init$, void, $DTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool)},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/dtm/DTMManager;Ljavax/xml/transform/Source;ILcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;Lcom/sun/org/apache/xml/internal/utils/XMLStringFactory;ZIZZ)V", nullptr, $PUBLIC, $method(DTMDefaultBaseIterators, init$, void, $DTMManager*, $Source*, int32_t, $DTMWSFilter*, $XMLStringFactory*, bool, int32_t, bool, bool)},
	{"getAxisIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators, getAxisIterator, $DTMAxisIterator*, int32_t)},
	{"getTypedAxisIterator", "(II)Lcom/sun/org/apache/xml/internal/dtm/DTMAxisIterator;", nullptr, $PUBLIC, $virtualMethod(DTMDefaultBaseIterators, getTypedAxisIterator, $DTMAxisIterator*, int32_t, int32_t)},
	{}
};

$InnerClassInfo _DTMDefaultBaseIterators_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedSingletonIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedSingletonIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$SingletonIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "SingletonIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NthDescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "NthDescendantIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedDescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedDescendantIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$DescendantIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "DescendantIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedAncestorIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedAncestorIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$AncestorIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "AncestorIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedFollowingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedFollowingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "FollowingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedPrecedingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedPrecedingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$PrecedingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "PrecedingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedPrecedingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedPrecedingSiblingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$PrecedingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "PrecedingSiblingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedAttributeIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedAttributeIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$AttributeIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "AttributeIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedFollowingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedFollowingSiblingIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingSiblingIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "FollowingSiblingIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceAttributeIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "NamespaceAttributeIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedRootIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedRootIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$RootIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "RootIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedNamespaceIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedNamespaceIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "NamespaceIterator", $PUBLIC},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceChildrenIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "NamespaceChildrenIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedChildrenIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "TypedChildrenIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$ParentIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "ParentIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$ChildrenIterator", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "ChildrenIterator", $PUBLIC | $FINAL},
	{"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase", "com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators", "InternalAxisIteratorBase", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DTMDefaultBaseIterators_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators",
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseTraversers",
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators_MethodInfo_,
	nullptr,
	nullptr,
	_DTMDefaultBaseIterators_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedSingletonIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$SingletonIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NthDescendantIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedDescendantIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$DescendantIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedAncestorIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$AncestorIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedFollowingIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedPrecedingIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$PrecedingIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedPrecedingSiblingIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$PrecedingSiblingIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedAttributeIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$AttributeIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedFollowingSiblingIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$FollowingSiblingIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceAttributeIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedRootIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$RootIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedNamespaceIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$NamespaceChildrenIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$TypedChildrenIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$ParentIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$ChildrenIterator,com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase"
};

$Object* allocate$DTMDefaultBaseIterators($Class* clazz) {
	return $of($alloc(DTMDefaultBaseIterators));
}

void DTMDefaultBaseIterators::init$($DTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing) {
	$DTMDefaultBaseTraversers::init$(mgr, source, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing);
}

void DTMDefaultBaseIterators::init$($DTMManager* mgr, $Source* source, int32_t dtmIdentity, $DTMWSFilter* whiteSpaceFilter, $XMLStringFactory* xstringfactory, bool doIndexing, int32_t blocksize, bool usePrevsib, bool newNameTable) {
	$DTMDefaultBaseTraversers::init$(mgr, source, dtmIdentity, whiteSpaceFilter, xstringfactory, doIndexing, blocksize, usePrevsib, newNameTable);
}

$DTMAxisIterator* DTMDefaultBaseIterators::getTypedAxisIterator(int32_t axis, int32_t type) {
	$useLocalCurrentObjectStackCache();
	$var($DTMAxisIterator, iterator, nullptr);
	{
		switch (axis) {
		case $Axis::SELF:
			{
				$assign(iterator, $new($DTMDefaultBaseIterators$TypedSingletonIterator, this, type));
				break;
			}
		case $Axis::CHILD:
			{
				$assign(iterator, $new($DTMDefaultBaseIterators$TypedChildrenIterator, this, type));
				break;
			}
		case $Axis::PARENT:
			{
				return ($$new($DTMDefaultBaseIterators$ParentIterator, this)->setNodeType(type));
			}
		case $Axis::ANCESTOR:
			{
				return ($new($DTMDefaultBaseIterators$TypedAncestorIterator, this, type));
			}
		case $Axis::ANCESTORORSELF:
			{
				return (($$new($DTMDefaultBaseIterators$TypedAncestorIterator, this, type))->includeSelf());
			}
		case $Axis::ATTRIBUTE:
			{
				return ($new($DTMDefaultBaseIterators$TypedAttributeIterator, this, type));
			}
		case $Axis::DESCENDANT:
			{
				$assign(iterator, $new($DTMDefaultBaseIterators$TypedDescendantIterator, this, type));
				break;
			}
		case $Axis::DESCENDANTORSELF:
			{
				$assign(iterator, ($$new($DTMDefaultBaseIterators$TypedDescendantIterator, this, type))->includeSelf());
				break;
			}
		case $Axis::FOLLOWING:
			{
				$assign(iterator, $new($DTMDefaultBaseIterators$TypedFollowingIterator, this, type));
				break;
			}
		case $Axis::PRECEDING:
			{
				$assign(iterator, $new($DTMDefaultBaseIterators$TypedPrecedingIterator, this, type));
				break;
			}
		case $Axis::FOLLOWINGSIBLING:
			{
				$assign(iterator, $new($DTMDefaultBaseIterators$TypedFollowingSiblingIterator, this, type));
				break;
			}
		case $Axis::PRECEDINGSIBLING:
			{
				$assign(iterator, $new($DTMDefaultBaseIterators$TypedPrecedingSiblingIterator, this, type));
				break;
			}
		case $Axis::NAMESPACE:
			{
				$assign(iterator, $new($DTMDefaultBaseIterators$TypedNamespaceIterator, this, type));
				break;
			}
		case $Axis::ROOT:
			{
				$assign(iterator, $new($DTMDefaultBaseIterators$TypedRootIterator, this, type));
				break;
			}
		default:
			{
				$init($XMLErrorResources);
				$throwNew($DTMException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_TYPED_ITERATOR_AXIS_NOT_IMPLEMENTED, $$new($ObjectArray, {$($of($Axis::getNames(axis)))}))));
			}
		}
	}
	return (iterator);
}

$DTMAxisIterator* DTMDefaultBaseIterators::getAxisIterator(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	$var($DTMAxisIterator, iterator, nullptr);
	switch (axis) {
	case $Axis::SELF:
		{
			$assign(iterator, $new($DTMDefaultBaseIterators$SingletonIterator, this));
			break;
		}
	case $Axis::CHILD:
		{
			$assign(iterator, $new($DTMDefaultBaseIterators$ChildrenIterator, this));
			break;
		}
	case $Axis::PARENT:
		{
			return ($new($DTMDefaultBaseIterators$ParentIterator, this));
		}
	case $Axis::ANCESTOR:
		{
			return ($new($DTMDefaultBaseIterators$AncestorIterator, this));
		}
	case $Axis::ANCESTORORSELF:
		{
			return (($$new($DTMDefaultBaseIterators$AncestorIterator, this))->includeSelf());
		}
	case $Axis::ATTRIBUTE:
		{
			return ($new($DTMDefaultBaseIterators$AttributeIterator, this));
		}
	case $Axis::DESCENDANT:
		{
			$assign(iterator, $new($DTMDefaultBaseIterators$DescendantIterator, this));
			break;
		}
	case $Axis::DESCENDANTORSELF:
		{
			$assign(iterator, ($$new($DTMDefaultBaseIterators$DescendantIterator, this))->includeSelf());
			break;
		}
	case $Axis::FOLLOWING:
		{
			$assign(iterator, $new($DTMDefaultBaseIterators$FollowingIterator, this));
			break;
		}
	case $Axis::PRECEDING:
		{
			$assign(iterator, $new($DTMDefaultBaseIterators$PrecedingIterator, this));
			break;
		}
	case $Axis::FOLLOWINGSIBLING:
		{
			$assign(iterator, $new($DTMDefaultBaseIterators$FollowingSiblingIterator, this));
			break;
		}
	case $Axis::PRECEDINGSIBLING:
		{
			$assign(iterator, $new($DTMDefaultBaseIterators$PrecedingSiblingIterator, this));
			break;
		}
	case $Axis::NAMESPACE:
		{
			$assign(iterator, $new($DTMDefaultBaseIterators$NamespaceIterator, this));
			break;
		}
	case $Axis::ROOT:
		{
			$assign(iterator, $new($DTMDefaultBaseIterators$RootIterator, this));
			break;
		}
	default:
		{
			$init($XMLErrorResources);
			$throwNew($DTMException, $($XMLMessages::createXMLMessage($XMLErrorResources::ER_ITERATOR_AXIS_NOT_IMPLEMENTED, $$new($ObjectArray, {$($of($Axis::getNames(axis)))}))));
		}
	}
	return (iterator);
}

DTMDefaultBaseIterators::DTMDefaultBaseIterators() {
}

$Class* DTMDefaultBaseIterators::load$($String* name, bool initialize) {
	$loadClass(DTMDefaultBaseIterators, name, initialize, &_DTMDefaultBaseIterators_ClassInfo_, allocate$DTMDefaultBaseIterators);
	return class$;
}

$Class* DTMDefaultBaseIterators::class$ = nullptr;

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com