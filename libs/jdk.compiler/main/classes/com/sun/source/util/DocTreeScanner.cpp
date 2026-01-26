#include <com/sun/source/util/DocTreeScanner.h>

#include <com/sun/source/doctree/AttributeTree.h>
#include <com/sun/source/doctree/AuthorTree.h>
#include <com/sun/source/doctree/CommentTree.h>
#include <com/sun/source/doctree/DeprecatedTree.h>
#include <com/sun/source/doctree/DocCommentTree.h>
#include <com/sun/source/doctree/DocRootTree.h>
#include <com/sun/source/doctree/DocTree.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/DocTypeTree.h>
#include <com/sun/source/doctree/EndElementTree.h>
#include <com/sun/source/doctree/EntityTree.h>
#include <com/sun/source/doctree/ErroneousTree.h>
#include <com/sun/source/doctree/HiddenTree.h>
#include <com/sun/source/doctree/IdentifierTree.h>
#include <com/sun/source/doctree/IndexTree.h>
#include <com/sun/source/doctree/InheritDocTree.h>
#include <com/sun/source/doctree/LinkTree.h>
#include <com/sun/source/doctree/LiteralTree.h>
#include <com/sun/source/doctree/ParamTree.h>
#include <com/sun/source/doctree/ProvidesTree.h>
#include <com/sun/source/doctree/ReferenceTree.h>
#include <com/sun/source/doctree/ReturnTree.h>
#include <com/sun/source/doctree/SeeTree.h>
#include <com/sun/source/doctree/SerialDataTree.h>
#include <com/sun/source/doctree/SerialFieldTree.h>
#include <com/sun/source/doctree/SerialTree.h>
#include <com/sun/source/doctree/SinceTree.h>
#include <com/sun/source/doctree/StartElementTree.h>
#include <com/sun/source/doctree/SummaryTree.h>
#include <com/sun/source/doctree/SystemPropertyTree.h>
#include <com/sun/source/doctree/TextTree.h>
#include <com/sun/source/doctree/ThrowsTree.h>
#include <com/sun/source/doctree/UnknownBlockTagTree.h>
#include <com/sun/source/doctree/UnknownInlineTagTree.h>
#include <com/sun/source/doctree/UsesTree.h>
#include <com/sun/source/doctree/ValueTree.h>
#include <com/sun/source/doctree/VersionTree.h>
#include <java/lang/Iterable.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $AttributeTree = ::com::sun::source::doctree::AttributeTree;
using $AuthorTree = ::com::sun::source::doctree::AuthorTree;
using $CommentTree = ::com::sun::source::doctree::CommentTree;
using $DeprecatedTree = ::com::sun::source::doctree::DeprecatedTree;
using $DocCommentTree = ::com::sun::source::doctree::DocCommentTree;
using $DocRootTree = ::com::sun::source::doctree::DocRootTree;
using $DocTree = ::com::sun::source::doctree::DocTree;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DocTypeTree = ::com::sun::source::doctree::DocTypeTree;
using $EndElementTree = ::com::sun::source::doctree::EndElementTree;
using $EntityTree = ::com::sun::source::doctree::EntityTree;
using $ErroneousTree = ::com::sun::source::doctree::ErroneousTree;
using $HiddenTree = ::com::sun::source::doctree::HiddenTree;
using $IdentifierTree = ::com::sun::source::doctree::IdentifierTree;
using $IndexTree = ::com::sun::source::doctree::IndexTree;
using $InheritDocTree = ::com::sun::source::doctree::InheritDocTree;
using $LinkTree = ::com::sun::source::doctree::LinkTree;
using $LiteralTree = ::com::sun::source::doctree::LiteralTree;
using $ParamTree = ::com::sun::source::doctree::ParamTree;
using $ProvidesTree = ::com::sun::source::doctree::ProvidesTree;
using $ReferenceTree = ::com::sun::source::doctree::ReferenceTree;
using $ReturnTree = ::com::sun::source::doctree::ReturnTree;
using $SeeTree = ::com::sun::source::doctree::SeeTree;
using $SerialDataTree = ::com::sun::source::doctree::SerialDataTree;
using $SerialFieldTree = ::com::sun::source::doctree::SerialFieldTree;
using $SerialTree = ::com::sun::source::doctree::SerialTree;
using $SinceTree = ::com::sun::source::doctree::SinceTree;
using $StartElementTree = ::com::sun::source::doctree::StartElementTree;
using $SummaryTree = ::com::sun::source::doctree::SummaryTree;
using $SystemPropertyTree = ::com::sun::source::doctree::SystemPropertyTree;
using $TextTree = ::com::sun::source::doctree::TextTree;
using $ThrowsTree = ::com::sun::source::doctree::ThrowsTree;
using $UnknownBlockTagTree = ::com::sun::source::doctree::UnknownBlockTagTree;
using $UnknownInlineTagTree = ::com::sun::source::doctree::UnknownInlineTagTree;
using $UsesTree = ::com::sun::source::doctree::UsesTree;
using $ValueTree = ::com::sun::source::doctree::ValueTree;
using $VersionTree = ::com::sun::source::doctree::VersionTree;
using $ClassInfo = ::java::lang::ClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace source {
			namespace util {

$MethodInfo _DocTreeScanner_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DocTreeScanner, init$, void)},
	{"reduce", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TR;TR;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, reduce, $Object*, Object$*, Object$*)},
	{"scan", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, scan, $Object*, $DocTree*, Object$*)},
	{"scan", "(Ljava/lang/Iterable;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Iterable<+Lcom/sun/source/doctree/DocTree;>;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, scan, $Object*, $Iterable*, Object$*)},
	{"scanAndReduce", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocTree;TP;TR;)TR;", $PRIVATE, $method(DocTreeScanner, scanAndReduce, $Object*, $DocTree*, Object$*, Object$*)},
	{"scanAndReduce", "(Ljava/lang/Iterable;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Iterable<+Lcom/sun/source/doctree/DocTree;>;TP;TR;)TR;", $PRIVATE, $method(DocTreeScanner, scanAndReduce, $Object*, $Iterable*, Object$*, Object$*)},
	{"visitAttribute", "(Lcom/sun/source/doctree/AttributeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/AttributeTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitAttribute, $Object*, $AttributeTree*, Object$*)},
	{"visitAuthor", "(Lcom/sun/source/doctree/AuthorTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/AuthorTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitAuthor, $Object*, $AuthorTree*, Object$*)},
	{"visitComment", "(Lcom/sun/source/doctree/CommentTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/CommentTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitComment, $Object*, $CommentTree*, Object$*)},
	{"visitDeprecated", "(Lcom/sun/source/doctree/DeprecatedTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DeprecatedTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitDeprecated, $Object*, $DeprecatedTree*, Object$*)},
	{"visitDocComment", "(Lcom/sun/source/doctree/DocCommentTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocCommentTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitDocComment, $Object*, $DocCommentTree*, Object$*)},
	{"visitDocRoot", "(Lcom/sun/source/doctree/DocRootTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocRootTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitDocRoot, $Object*, $DocRootTree*, Object$*)},
	{"visitDocType", "(Lcom/sun/source/doctree/DocTypeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocTypeTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitDocType, $Object*, $DocTypeTree*, Object$*)},
	{"visitEndElement", "(Lcom/sun/source/doctree/EndElementTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/EndElementTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitEndElement, $Object*, $EndElementTree*, Object$*)},
	{"visitEntity", "(Lcom/sun/source/doctree/EntityTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/EntityTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitEntity, $Object*, $EntityTree*, Object$*)},
	{"visitErroneous", "(Lcom/sun/source/doctree/ErroneousTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ErroneousTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitErroneous, $Object*, $ErroneousTree*, Object$*)},
	{"visitHidden", "(Lcom/sun/source/doctree/HiddenTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/HiddenTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitHidden, $Object*, $HiddenTree*, Object$*)},
	{"visitIdentifier", "(Lcom/sun/source/doctree/IdentifierTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/IdentifierTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitIdentifier, $Object*, $IdentifierTree*, Object$*)},
	{"visitIndex", "(Lcom/sun/source/doctree/IndexTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/IndexTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitIndex, $Object*, $IndexTree*, Object$*)},
	{"visitInheritDoc", "(Lcom/sun/source/doctree/InheritDocTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/InheritDocTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitInheritDoc, $Object*, $InheritDocTree*, Object$*)},
	{"visitLink", "(Lcom/sun/source/doctree/LinkTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/LinkTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitLink, $Object*, $LinkTree*, Object$*)},
	{"visitLiteral", "(Lcom/sun/source/doctree/LiteralTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/LiteralTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitLiteral, $Object*, $LiteralTree*, Object$*)},
	{"visitOther", "(Lcom/sun/source/doctree/DocTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/DocTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitOther, $Object*, $DocTree*, Object$*)},
	{"visitParam", "(Lcom/sun/source/doctree/ParamTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ParamTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitParam, $Object*, $ParamTree*, Object$*)},
	{"visitProvides", "(Lcom/sun/source/doctree/ProvidesTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ProvidesTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitProvides, $Object*, $ProvidesTree*, Object$*)},
	{"visitReference", "(Lcom/sun/source/doctree/ReferenceTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ReferenceTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitReference, $Object*, $ReferenceTree*, Object$*)},
	{"visitReturn", "(Lcom/sun/source/doctree/ReturnTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ReturnTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitReturn, $Object*, $ReturnTree*, Object$*)},
	{"visitSee", "(Lcom/sun/source/doctree/SeeTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SeeTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitSee, $Object*, $SeeTree*, Object$*)},
	{"visitSerial", "(Lcom/sun/source/doctree/SerialTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SerialTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitSerial, $Object*, $SerialTree*, Object$*)},
	{"visitSerialData", "(Lcom/sun/source/doctree/SerialDataTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SerialDataTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitSerialData, $Object*, $SerialDataTree*, Object$*)},
	{"visitSerialField", "(Lcom/sun/source/doctree/SerialFieldTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SerialFieldTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitSerialField, $Object*, $SerialFieldTree*, Object$*)},
	{"visitSince", "(Lcom/sun/source/doctree/SinceTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SinceTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitSince, $Object*, $SinceTree*, Object$*)},
	{"visitStartElement", "(Lcom/sun/source/doctree/StartElementTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/StartElementTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitStartElement, $Object*, $StartElementTree*, Object$*)},
	{"visitSummary", "(Lcom/sun/source/doctree/SummaryTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SummaryTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitSummary, $Object*, $SummaryTree*, Object$*)},
	{"visitSystemProperty", "(Lcom/sun/source/doctree/SystemPropertyTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/SystemPropertyTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitSystemProperty, $Object*, $SystemPropertyTree*, Object$*)},
	{"visitText", "(Lcom/sun/source/doctree/TextTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/TextTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitText, $Object*, $TextTree*, Object$*)},
	{"visitThrows", "(Lcom/sun/source/doctree/ThrowsTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ThrowsTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitThrows, $Object*, $ThrowsTree*, Object$*)},
	{"visitUnknownBlockTag", "(Lcom/sun/source/doctree/UnknownBlockTagTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/UnknownBlockTagTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitUnknownBlockTag, $Object*, $UnknownBlockTagTree*, Object$*)},
	{"visitUnknownInlineTag", "(Lcom/sun/source/doctree/UnknownInlineTagTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/UnknownInlineTagTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitUnknownInlineTag, $Object*, $UnknownInlineTagTree*, Object$*)},
	{"visitUses", "(Lcom/sun/source/doctree/UsesTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/UsesTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitUses, $Object*, $UsesTree*, Object$*)},
	{"visitValue", "(Lcom/sun/source/doctree/ValueTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/ValueTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitValue, $Object*, $ValueTree*, Object$*)},
	{"visitVersion", "(Lcom/sun/source/doctree/VersionTree;Ljava/lang/Object;)Ljava/lang/Object;", "(Lcom/sun/source/doctree/VersionTree;TP;)TR;", $PUBLIC, $virtualMethod(DocTreeScanner, visitVersion, $Object*, $VersionTree*, Object$*)},
	{}
};

$ClassInfo _DocTreeScanner_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.source.util.DocTreeScanner",
	"java.lang.Object",
	"com.sun.source.doctree.DocTreeVisitor",
	nullptr,
	_DocTreeScanner_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljava/lang/Object;Lcom/sun/source/doctree/DocTreeVisitor<TR;TP;>;"
};

$Object* allocate$DocTreeScanner($Class* clazz) {
	return $of($alloc(DocTreeScanner));
}

void DocTreeScanner::init$() {
}

$Object* DocTreeScanner::scan($DocTree* node, Object$* p) {
	return $of((node == nullptr) ? ($Object*)nullptr : $nc(node)->accept(this, p));
}

$Object* DocTreeScanner::scanAndReduce($DocTree* node, Object$* p, Object$* r) {
	return $of(reduce($(scan(node, p)), r));
}

$Object* DocTreeScanner::scan($Iterable* nodes, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, nullptr);
	if (nodes != nullptr) {
		bool first = true;
		{
			$var($Iterator, i$, nodes->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($DocTree, node, $cast($DocTree, i$->next()));
				{
					$assign(r, first ? scan(node, p) : scanAndReduce(node, p, r));
					first = false;
				}
			}
		}
	}
	return $of(r);
}

$Object* DocTreeScanner::scanAndReduce($Iterable* nodes, Object$* p, Object$* r) {
	return $of(reduce($(scan(nodes, p)), r));
}

$Object* DocTreeScanner::reduce(Object$* r1, Object$* r2) {
	return $of(r1);
}

$Object* DocTreeScanner::visitAttribute($AttributeTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getValue())), p));
}

$Object* DocTreeScanner::visitAuthor($AuthorTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getName())), p));
}

$Object* DocTreeScanner::visitComment($CommentTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* DocTreeScanner::visitDeprecated($DeprecatedTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getBody())), p));
}

$Object* DocTreeScanner::visitDocComment($DocCommentTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$Iterable*>($nc(node)->getFirstSentence())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getBody())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getBlockTags())), p, r));
	return $of(r);
}

$Object* DocTreeScanner::visitDocRoot($DocRootTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* DocTreeScanner::visitDocType($DocTypeTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* DocTreeScanner::visitEndElement($EndElementTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* DocTreeScanner::visitEntity($EntityTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* DocTreeScanner::visitErroneous($ErroneousTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* DocTreeScanner::visitHidden($HiddenTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getBody())), p));
}

$Object* DocTreeScanner::visitIdentifier($IdentifierTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* DocTreeScanner::visitIndex($IndexTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($($nc(node)->getSearchTerm()), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getDescription())), p, r));
	return $of(r);
}

$Object* DocTreeScanner::visitInheritDoc($InheritDocTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* DocTreeScanner::visitLink($LinkTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$DocTree*>($nc(node)->getReference())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getLabel())), p, r));
	return $of(r);
}

$Object* DocTreeScanner::visitLiteral($LiteralTree* node, Object$* p) {
	return $of(scan($(static_cast<$DocTree*>($nc(node)->getBody())), p));
}

$Object* DocTreeScanner::visitParam($ParamTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$DocTree*>($nc(node)->getName())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getDescription())), p, r));
	return $of(r);
}

$Object* DocTreeScanner::visitProvides($ProvidesTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$DocTree*>($nc(node)->getServiceType())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getDescription())), p, r));
	return $of(r);
}

$Object* DocTreeScanner::visitReference($ReferenceTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* DocTreeScanner::visitReturn($ReturnTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getDescription())), p));
}

$Object* DocTreeScanner::visitSee($SeeTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getReference())), p));
}

$Object* DocTreeScanner::visitSerial($SerialTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getDescription())), p));
}

$Object* DocTreeScanner::visitSerialData($SerialDataTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getDescription())), p));
}

$Object* DocTreeScanner::visitSerialField($SerialFieldTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$DocTree*>($nc(node)->getName())), p));
	$assign(r, scanAndReduce($(static_cast<$DocTree*>($nc(node)->getType())), p, r));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getDescription())), p, r));
	return $of(r);
}

$Object* DocTreeScanner::visitSince($SinceTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getBody())), p));
}

$Object* DocTreeScanner::visitStartElement($StartElementTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getAttributes())), p));
}

$Object* DocTreeScanner::visitSummary($SummaryTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getSummary())), p));
}

$Object* DocTreeScanner::visitSystemProperty($SystemPropertyTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* DocTreeScanner::visitText($TextTree* node, Object$* p) {
	return $of(nullptr);
}

$Object* DocTreeScanner::visitThrows($ThrowsTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$DocTree*>($nc(node)->getExceptionName())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getDescription())), p, r));
	return $of(r);
}

$Object* DocTreeScanner::visitUnknownBlockTag($UnknownBlockTagTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getContent())), p));
}

$Object* DocTreeScanner::visitUnknownInlineTag($UnknownInlineTagTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getContent())), p));
}

$Object* DocTreeScanner::visitUses($UsesTree* node, Object$* p) {
	$useLocalCurrentObjectStackCache();
	$var($Object, r, scan($(static_cast<$DocTree*>($nc(node)->getServiceType())), p));
	$assign(r, scanAndReduce($(static_cast<$Iterable*>($nc(node)->getDescription())), p, r));
	return $of(r);
}

$Object* DocTreeScanner::visitValue($ValueTree* node, Object$* p) {
	return $of(scan($(static_cast<$DocTree*>($nc(node)->getReference())), p));
}

$Object* DocTreeScanner::visitVersion($VersionTree* node, Object$* p) {
	return $of(scan($(static_cast<$Iterable*>($nc(node)->getBody())), p));
}

$Object* DocTreeScanner::visitOther($DocTree* node, Object$* p) {
	return $of(nullptr);
}

DocTreeScanner::DocTreeScanner() {
}

$Class* DocTreeScanner::load$($String* name, bool initialize) {
	$loadClass(DocTreeScanner, name, initialize, &_DocTreeScanner_ClassInfo_, allocate$DocTreeScanner);
	return class$;
}

$Class* DocTreeScanner::class$ = nullptr;

			} // util
		} // source
	} // sun
} // com