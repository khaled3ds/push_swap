/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: kadas <kadas@student.42.fr>                +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/09/27 15:28:40 by kadas             #+#    #+#             */
/*   Updated: 2025/09/27 15:28:40 by kadas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	long long		info;
	struct s_list	*next;
}					t_list;
void				ft_putstr(char *s);
void				sa(t_list **a);
long long			ft_atol(const char *nptr);
int					validnum(char *s);
void				sorter5(t_list **t);
void				sorter3(t_list **t);
void				sb(t_list **b);
void				ss(t_list **s1, t_list **s2);
void				ra(t_list **sta);
void				rb(t_list **sta);
void				rr(t_list **sta, t_list **stb);
void				rra(t_list **sta);
void				rrb(t_list **sta);
void				rrr(t_list **sta, t_list **stb);
int					ft_strcmp(char *s1, char *s2);
int					notequal(char **s);
void				ft_lstadd_back(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstnew(long long content);
void				ft_lstclear(t_list **lst);
void				sort4(t_list **t);
void				sort5(t_list **t);
void				pb(t_list **sta, t_list **stb);
void				pa(t_list **sta, t_list **stb);
void				sorter(t_list **t);
#endif
