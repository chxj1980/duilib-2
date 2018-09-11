
/*! \file UIHorizontalLayout.h
	\brief �����˺��򲼾���
	\author duilib
	\date 11:10:2013   19:19
	\copyright GNU Public License
	\version 1.0
*/

#ifndef __UIHORIZONTALLAYOUT_H__
#define __UIHORIZONTALLAYOUT_H__

	
/*! \class CHorizontalLayoutUI
    \brief �������Ҫ��װ�˺��򲼾ֵ�һ�����ܵ�ʵ��
*/

class CUIHorizontalLayout : public CUIContainer
{
public:
	CUIHorizontalLayout();

	
	/** \fn LPCTSTR GetClass() const
	    \brief ��ȡ���������
	    \return ����
	*/
	
	CUIString GetClass() const;
	
	/** \fn LPVOID GetInterface(LPCTSTR pstrName)
	    \brief ͨ�����ƻ�ȡ�ӿ�
		\param [in] pstrName �ӿ�����
	    \return �ӿڵ�ָ��
	*/
	
	LPVOID GetInterface(const CUIString& pstrName);
	
	/** \fn LPVOID GetInterface(LPCTSTR pstrName)
	    \brief ͨ�����ƻ�ȡ�ӿ�
		\param [in] pstrName �ӿ�����
	    \return �ӿڵ�ָ��
	*/
	
	UINT GetControlFlags() const;
	
	/** \fn void SetSepWidth(int iWidth)
	    \brief �ָ�����,������ʾ�ָ�������߻����ұ�,��(-4)
	*/
	
	void SetSepWidth(int iWidth);
	
	/** \fn int GetSepWidth() const
	    \brief ��ȡ�ָ�����
	    \return �ָ�����
		\see SetSepWidth()
	*/
	
	int GetSepWidth() const;
	
	/** \fn void SetSepImmMode(bool bImmediately)
		\param [in] bImmediately �Ƿ�����
	    \brief �����϶��ָ����Ƿ������ı��С,��(false)
	*/
	
	void SetSepImmMode(bool bImmediately);
	
	/** \fn bool IsSepImmMode() const
	    \brief �Ƿ��������϶��ָ��������ı��С������
	    \return true �Ѿ����� false û������
		\see SetSepImmMode()
	*/
	
	bool IsSepImmMode() const;
	
	/** \fn void SetAttribute(LPCTSTR pstrName, LPCTSTR pstrValue)
	    \brief ���ô˿ؼ�������
		\param [in] pstrName ��������
		\param [in] pstrValue ����ֵ
	*/
	
	void SetAttribute(LPCWSTR pstrName, LPCWSTR pstrValue);
	
	/** \fn void DoEvent(TEventUI& event)
	    \brief ��Ӧ�¼�����
		\param [in,out] event �¼�������
	*/
	
	void DoEvent(TEventUI& event);
	
	/** \fn void SetPos(const CUIRect& rc)
	    \brief ���ÿؼ��µ�λ��
		\param [in] rc �µ�λ�ýṹ
		\note ����������ڴ��ڴ�С�ı�ʱ�������������������Ӳ��ֿؼ���float��������Ϊ
		      false�Ļ���������Զ�λ��������������¼����Ӳ��ֵĴ�С��Ȼ����Ӳ��ֽ���
			  SetPos���Ӷ������������ֵĴ�С��
	*/
	
	void SetPos(const CUIRect& rc);
	
	/** \fn void DoPostPaint(HDC hDC, const RECT& rcPaint)
	    \brief ��������������Ʒָ����ı���
		\param hDC ��ˢ���
		\param rcPaint �������û���õ�
		\note ֻ����sepimm���ó���false���϶��Ż���ַָ�����
	*/
	
	void DoPostPaint(cairo_t *cr, const CUIRect& rcPaint);
	
	/** \fn RECT GetThumbRect(bool bUseNew = false) const
	    \brief �������ʱ��ȡ�ָ�����RECT.
		\param [in] bUseNew �Ƿ�ʹ����λ�� 
	    \return �ָ�����RECT
	*/
	
	CUIRect GetThumbRect(bool bUseNew = false) const;

protected:
	
	/** �ָ������*/
	int m_iSepWidth;
	
	/** ��ť״̬*/
	UINT m_uButtonState;
	
	/** ��һ������λ��*/
	POINT ptLastMouse;

	/** �ؼ���λ��*/
	CUIRect m_rcNewPos;
	
	/** �϶��ָ����Ƿ������ı��С*/
	bool m_bImmMode;
};

#endif // __UIHORIZONTALLAYOUT_H__
