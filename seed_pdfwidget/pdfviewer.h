#ifndef PDFVIEWER_H
#define PDFVIEWER_H

#ifndef IPDFVIEWER_H
#include "seed_pdfwidget/ipdfviewer.h"
#endif /*IPDFVIEWER_H*/

#include "QtWidgets/QTabWidget"

BEGIN_DOX_NAMESPACE

class PDFViewer
	: public IPDFViewer
	, public QTabWidget
{
	REGISTER_ACTUALIZE(PDFViewer, IPDFViewer)

public:

	/* @接口 默认构造函数
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月12号
	 */
	PDFViewer();

	/* @接口 默认析构函数
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月12号
	 */
	~PDFViewer();
	
	/* @接口 获取视图的背景颜色
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月12号
	 */
	virtual QColor color() const;

	/* @接口
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月15号
	 */
	virtual QWidget *viewPointer();

	/* @接口 获取文档的个数
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	virtual int documentCount() const;

	/* @接口 设置视图背景的颜色
	 * @参数 QColor 视图背景的颜色
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月12号
	 */
	virtual bool color(const QColor &);

	/* @接口 新建一个视图
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	virtual Object<IPDFDocument> newPage();

	/* @接口 添加一个视图
	 * @返回 bool 成功返回值为true，否则返回值为false
	 * @作者 杨发荷
	 * @邮箱 575814050@qq.com
	 * @时间 2019年10月14号
	 */
	virtual bool addPage(const Object<IPDFDocument> &);

};

END_DOX_NAMESPACE

#endif /*PDFVIEWER_H*/