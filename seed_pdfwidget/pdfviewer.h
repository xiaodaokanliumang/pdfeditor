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

	/* @�ӿ� Ĭ�Ϲ��캯��
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��12��
	 */
	PDFViewer();

	/* @�ӿ� Ĭ����������
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��12��
	 */
	~PDFViewer();
	
	/* @�ӿ� ��ȡ��ͼ�ı�����ɫ
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��12��
	 */
	virtual QColor color() const;

	/* @�ӿ�
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��15��
	 */
	virtual QWidget *viewPointer();

	/* @�ӿ� ��ȡ�ĵ��ĸ���
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	virtual int documentCount() const;

	/* @�ӿ� ������ͼ��������ɫ
	 * @���� QColor ��ͼ��������ɫ
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��12��
	 */
	virtual bool color(const QColor &);

	/* @�ӿ� �½�һ����ͼ
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	virtual Object<IPDFDocument> newPage();

	/* @�ӿ� ���һ����ͼ
	 * @���� bool �ɹ�����ֵΪtrue�����򷵻�ֵΪfalse
	 * @���� ���
	 * @���� 575814050@qq.com
	 * @ʱ�� 2019��10��14��
	 */
	virtual bool addPage(const Object<IPDFDocument> &);

};

END_DOX_NAMESPACE

#endif /*PDFVIEWER_H*/